#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <thread>
#include <atomic>
#include <condition_variable>
#include <mutex>

class Worker{
public:
    Worker (){}
    ~Worker(){ stop(); }

    void start(){
        _thread = std::thread(std::bind(&Worker::run, this));
        _thread.detach();
    }

    void stop(){
        _stop.store(true);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        if(_thread.joinable()){
            _thread.join();
        }
    }

    void pause(){
        _is_paused.store(true);
    }
    
    void resume(){
        _is_paused.store(false);
        _cond.notify_one();
    }

    void wait(){
        {
            std::unique_lock<std::mutex> l(_mutex);
            _cond.wait(l, [this](){ return !this->_is_paused.load();});
        }
    }

    bool is_running(){
        return !_stop.load();
    }

public:
    virtual void run() = 0;
private:
    std::thread _thread;
    std::atomic<bool> _stop{false};
    std::condition_variable _cond;
    std::mutex _mutex;
    std::atomic<bool> _is_paused{false};
};


class Staff : public Worker{
    public: 
    void run() override{
        int counter = 0;
        while(is_running()){
            wait();
            ++counter;
            std::cout << "Running counter: " << counter << std::endl;;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        std::cout << "Stopped!!!" << std::endl;
    }
};


class Staff1 : public Worker{
    public: 
    void run() override{
        int counter = 0;
        while(is_running()){
            wait();
            ++counter;
            std::cout << "Staff1 is Running counter: " << counter << std::endl;;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        std::cout << "Stopped!!!" << std::endl;
    }
};

int main(){

    auto w = Staff();
    auto w1 = Staff1();

    w.start();
    w1.start();

    std::this_thread::sleep_for(std::chrono::seconds(1));
    w.pause();
    w1.pause();

    std::this_thread::sleep_for(std::chrono::seconds(1));
    w.resume();
    w1.resume();

    std::this_thread::sleep_for(std::chrono::seconds(1));
    w1.stop();
    w.stop();

    return 0;
}
