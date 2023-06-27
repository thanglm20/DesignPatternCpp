//
// Created by Thanglm on 6/27/2023.
//
#include <iostream>
#include <functional>
#include <string>
enum class State : int { FAIL = -1, SUCCESS = 0};
class Executor {
private:
    using call_back_type = std::function<void(const std::string& message, void* object, State status)>;
    call_back_type  _call_back_state;
public:
    explicit Executor(call_back_type call_back_state)
    : _call_back_state(call_back_state) {}
    ~Executor() {}
    void execute(int data) {
        if(data > 0){
            std::cout << "Executor is executing ...\n";
            _call_back_state("Executor executed successfully", this, State::SUCCESS);
        } else {
            std::cout << "Executing failed ...\n";
            _call_back_state("Executing failed", this, State::FAIL);
        }
    }
    bool is_alive(){
        return true;
    }
};

void call_back_sate(const std::string& message, void* object, State status){
    Executor* executor = static_cast<Executor*>(object);
    if(executor->is_alive()){
        std::cout << "Executor is alive now!!!\n";
    }
    std::cout << "call_back_sate: " << message <<  ", state: " << (int)status << std::endl;
}
int main(){
    Executor executor(call_back_sate);
    executor.execute(1);
    executor.execute(-1
    );
    return 0;
}