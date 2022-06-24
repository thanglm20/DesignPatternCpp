/*
    Module: Receiver.cpp
    Author: LE MANH THANG
    Created: Dec 21th, 2021
*/
#ifndef Receiver_hpp
#define Receiver_hpp

#include <pthread.h>
#include <signal.h>
#include <memory>
#include "DataManager.hpp"

class Receiver
{
private:
    std::shared_ptr<DataManager> m_dataManager = nullptr;
    pthread_mutex_t m_mutex = PTHREAD_MUTEX_INITIALIZER;
    pthread_t m_thread;
    static void *threadFunc(void *args);
    void process();
    int m_id = 0;
public:
    Receiver(std::shared_ptr<DataManager>& dataManager, int id);
    ~Receiver();
    void run();
    void stop();
};

#endif
