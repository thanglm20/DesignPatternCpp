

/*
 */

#include <iostream>
#include <vector>
#include <memory>

class Device 
{
    public:
    Device(){}
    virtual void on() = 0;
    virtual void off() = 0;

};
class Light : public Device
{

public:
    Light() {}
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
    void on()
    {
        std::cout << "Turn on Fan\n";
    }
    void off()
    {
        std::cout << "Turn off Fan\n";
    }
};



class Command
{
public:
    Command() {}
    virtual void execute() = 0;
};

class OnCommand : public Command
{
    std::shared_ptr<Device> m_device;

public:
    OnCommand( const std::shared_ptr<Device> &device) : m_device(device)
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
    OffCommand(const std::shared_ptr<Device> &device) : m_device(device)
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
    RemoteButton() {}
    void setCommand(std::shared_ptr<Command> cmd)
    {
        m_command = cmd;
    }
    void pressButton()
    {
        m_command->execute();
    }
};
int main()
{
    std::cout << "Command Pattern Design" << std::endl;
    auto light = std::make_shared<Light>();
    auto fan = std::make_shared<Fan>();

    RemoteButton* btn = new RemoteButton();

    auto cmd1 = std::make_shared<OnCommand>(light);
    btn->setCommand(cmd1);
    btn->pressButton();

    auto cmd2 = std::make_shared<OnCommand>(fan);
    btn->setCommand(cmd2);
    btn->pressButton();

    return 0;
}