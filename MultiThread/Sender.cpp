/*
    Sender.cpp
    Author: LE MANH THANG
    Created: Dec 21th, 2021
*/

#include "Sender.hpp"
#include <chrono>
#include <unistd.h>

Sender::Sender(std::shared_ptr<DataManager>& dataManager)
{
    this->m_dataManager = dataManager;
}

Sender::~Sender()
{
}

void Sender::run()
{
    pthread_create(&this->m_thread, NULL, threadFunc, this);
}

void Sender::stop()
{

    pthread_cancel(this->m_thread); // LINUX
    // pthread_kill(this->m_thread, SIGUSR1); // ANDROID NDK
}

void *Sender::threadFunc(void *args)
{
    Sender *thread = (Sender *)args;
    thread->process();
    pthread_exit(NULL);
}

void Sender::process()
{
    std::cout << "Creating Sender thread\n";

    int data = 0;
    while (1)
    {
        ++data;
        if (data > 1000)
        {
            data = 0;
        }
        pthread_mutex_lock(&this->m_mutex);
        this->m_dataManager->update(data);
        std::cout << "Sender sent: " << data << std::endl;
        pthread_mutex_unlock(&this->m_mutex);
        sleep(1);
    }
}
