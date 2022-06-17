
#ifndef Observer_hpp
#define Observer_hpp


class Observer
{

public:
    Observer() 
    {
    }
    ~Observer()
    {
    }
    virtual void update() = 0;
};


#endif