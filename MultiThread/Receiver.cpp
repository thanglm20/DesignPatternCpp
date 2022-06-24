/*
    Receiver.cpp
    Author: LE MANH THANG
    Created: Dec 21th, 2021
*/

#include "Receiver.hpp"
#include <chrono>
#include <unistd.h>

Receiver::Receiver(std::shared_ptr<DataManager>& dataManager, int id)
{
    this->m_id = id;
    this->m_dataManager = dataManager;
}

Receiver::~Receiver()
{
}

void Receiver::run()
{
    pthread_create(&this->m_thread, NULL, threadFunc, this);
}

void Receiver::stop()
{

    pthread_cancel(this->m_thread); // LINUX
    // pthread_kill(this->m_thread, SIGUSR1); // ANDROID NDK
}

void *Receiver::threadFunc(void *args)
{
    Receiver *thread = (Receiver *)args;
    thread->process();
    pthread_exit(NULL);
}

void Receiver::process()
{
    std::cout << "Creating Receiver thread\n";
    while (1)
    {
        pthread_mutex_lock(&this->m_mutex);
        int data = this->m_dataManager->get();
        pthread_mutex_unlock(&this->m_mutex);
        std::cout << "Receiver " << m_id <<" got: " << data << std::endl;
        sleep(1);

    }
}
