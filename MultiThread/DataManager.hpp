

/*
    FrameManger.cpp
    Author: LE MANH THANG
    Created: Dec 21th, 2021
*/
#ifndef DataManager_hpp
#define DataManager_hpp

#include <iostream>

class DataManager
{
private:
    /* data */
    int m_data = 0;

public:
    DataManager() {}
    ~DataManager() {}
    void update(int data)
    {
        m_data = data;
    }
    int get() const
    {
        return m_data;
    }
};

#endif