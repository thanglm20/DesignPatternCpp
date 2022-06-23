

/*
defines an interface for accessing and traversing elements
*/

#include <iostream>
#include <vector>

[[noreturn]] static void _Xrange()
{
    // printf("invalid vector subscript");
}

template <class T>
class Iterator
{
public:
    // virtual int begin() = 0;
    // virtual int end() = 0;
    virtual bool hasNext() = 0;
    virtual T &next() = 0;
};

template <class T>
class Container
{
public:
    Iterator<T> *getIterator()
    {
        return new IIterator(this);
    }
    void add(T item)
    {
        m_vec.push_back(item);
    }

private:
    std::vector<T> m_vec;

    // nested class that can aaccess any member of enclosing class
    class IIterator : public Iterator<T>
    {

    private:
        int index = 0;
        Container *m_con;

    public:
        IIterator(Container *con) : m_con(con) {}

        bool hasNext() override
        {

            if (index < m_con->m_vec.size())
            {
                return true;
            }
            return false;
        }

        T &next() override
        {
            if (hasNext())
            {
                auto a = m_con->m_vec[index++];
                return m_con->m_vec[index++];
            }
            else
                _Xrange();
        }
    };
};

int main()
{
    std::cout << "Iterator Pattern Design" << std::endl;

    Container<int> container;
    container.add(1);
    container.add(2);
    container.add(3);
    container.add(4);
    container.add(5);
    for (auto it = container.getIterator(); it->hasNext();)
    {
        int item = it->next();
        std::cout << item << std::endl;
    }

    return 0;
}