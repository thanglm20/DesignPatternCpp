

/*

Proxy is applicable whenever there is a need for a more versatile or sophisticated
reference to an object than a simple pointer. Here are several common situations
in which the Proxy pattern is applicable:
    1. A remote proxy provides a local representative for an object in a different
    address space. NEXTSTEP [Add94] uses the class NXProxy for this purpose.
    2. A virtual proxy creates expensive objects on demand. The ImageProxy
    described in the Motivation is an example of such a proxy.
    3. A protection proxy controls access to the original object. Protection
    proxies are useful when objects should have different access rights. For
    example, KernelProxies in the Choices operating system [CIRM93] provide
    protected access to operating system objects.
    4. A smart reference is a replacement for a bare pointer that performs
    additional actions when an object is accessed. Typical uses include
        o counting the number of references to the real object so that it can
        be freed automatically when there are no more references (also called
        smart pointers [Ede92]).
        o loading a persistent object into memory when it's first referenced.
        o checking that the real object is locked before it's accessed to ensure
        that no other object can change it.
- Proxy forwards requests to RealSubject when appropriate, depending on the
kind of proxy
- While the Proxy pattern isn’t a frequent guest in most C++ applications,
it’s still very handy in some special cases.
It’s irreplaceable when you want to add some additional behaviors
to an object of some existing class without changing the client code.
*/

// references: https://refactoring.guru/design-patterns/proxy/cpp/example
#include <iostream>
#include <memory>
class RealSubject
{
public:
    virtual void request()
    {
        std::cout << "Client requested to Subject successfully\n";
    }
};

class Proxy : RealSubject
{
private:
    std::shared_ptr<RealSubject> m_subject;
    void checkAccess()
    {
        std::cout << "Proxy is checking access ... \n";
    }
    void checkLicense()
    {
        std::cout << "Proxy is checking license ... \n";
    }
    void checkVirus()
    {
        std::cout << "Proxy is checking virus ... \n";
    }
public:
    Proxy(std::shared_ptr<RealSubject>& realSubject) : m_subject(realSubject)
    {
    }
    void request() override
    {
        checkAccess();
        checkLicense();
        checkVirus();
        std::cout << "Proxy have check done, forwarding to real subject ...\n";
        m_subject->request();
    }
};

int main()
{
    std::cout << "Proxy Pattern Design" << std::endl;
    auto realSubject = std::make_shared<RealSubject>();
    Proxy* proxy = new Proxy(realSubject);
    proxy->request();
    return 0;
}