/*
    Module: Sender.cpp
    Author: LE MANH THANG
    Created: Dec 21th, 2021
*/
#ifndef Sender_hpp
#define Sender_hpp

#include <pthread.h>
#include <signal.h>
#include <memory>
#include "DataManager.hpp"

class Sender
{
private:
    std::shared_ptr<DataManager> m_dataManager = nullptr;
    pthread_mutex_t m_mutex = PTHREAD_MUTEX_INITIALIZER;
    pthread_t m_thread;
    static void *threadFunc(void *args);
    void process();
public:
    Sender(std::shared_ptr<DataManager>& dataManager);
    ~Sender();
    void run();
    void stop();
};

#endif
