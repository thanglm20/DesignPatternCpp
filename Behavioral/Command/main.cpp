

/*
Encapsulate a request as an object, thereby letting you parameterizeclients with
different requests, queue or log requests, and supportundoable operations.
 */

/*
    Problem:
    There are 1->N workers and only one Ojbect to call worker each time
    Solve: Create a Command on these workers and pass to Object
    Object 
    Time 1: Set Command on Worker 1 -> pass to Object -> execute
    Time 2: Set Command on Worker 2 -> pass to Object -> execute 

*/

#include <iostream>
#include <vector>
#include <memory>

class Device 
{
    public:
    Device(){}
    virtual ~Device() {}
    virtual void on() = 0;
    virtual void off() = 0;

};
class Light : public Device
{

public:
    Light() {}
    ~Light() override {}
    void on() override
    {
        std::cout << "Turn on light\n";
    }
    void off() override
    {
        std::cout << "Turn off light\n";
    }
};

class Fan : public Device
{

public:
    Fan() {}
    ~Fan() override {}
    void on() override
    {
        std::cout << "Turn on Fan\n";
    }
    void off() override
    {
        std::cout << "Turn off Fan\n";
    }
};



class Command
{
public:
    explicit Command() {}
    virtual ~Command() {}
    virtual void execute() = 0;
};

class OnCommand : public Command
{
    std::shared_ptr<Device> m_device;

public:
    explicit OnCommand( const std::shared_ptr<Device> &device) : m_device(device)
    {
    }
    void execute() override
    {
        m_device->on();
    }
};
class OffCommand : public Command
{
    std::shared_ptr<Device> m_device;

public:
    explicit OffCommand(const std::shared_ptr<Device> &device) : m_device(device)
    {
    }
    void execute() override
    {
        m_device->off();
    }
};

class RemoteButton
{
private:
    std::shared_ptr<Command> m_command;

public:
    explicit RemoteButton() {}
    void setCommand(const std::shared_ptr<Command>& cmd)
    {
        m_command = cmd;
    }
    void pressButton()
    {
        m_command->execute();
    }
};
void print(int &a)
{
    std::cout << &a << std::endl;
}
int main()
{
    std::cout << "Command Pattern Design" << std::endl;
    auto light = std::make_shared<Light>();
    auto fan = std::make_shared<Fan>();

    auto btn = new RemoteButton();

    auto cmd1 = std::make_shared<OnCommand>(light);
    btn->setCommand(cmd1);
    btn->pressButton();

    auto cmd2 = std::make_shared<OnCommand>(fan);
    btn->setCommand(cmd2);
    btn->pressButton();

    delete btn;
    return 0;
}
