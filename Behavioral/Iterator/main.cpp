

/*
defines an interface for accessing and traversing elements
*/

#include <iostream>
#include <vector>
#include <memory>
#include <vector>

using namespace  std;


template <class Item>
class Iterator
{
public:
    virtual void begin() = 0;
    virtual bool end() = 0;
    virtual void next() = 0;
    virtual Item currentItem() = 0;
    virtual ~Iterator(){}
protected:
    explicit Iterator(){}
};



template <class Item, class Container>
class ConcreteIterator : public Iterator<Item>{
private:
    int m_cur_index = 0;
    Container& m_container;
public:
    explicit ConcreteIterator(Container& list)
    :
    m_container(list), m_cur_index(0)
    {

    }
    ~ConcreteIterator() override{}
    void begin() override{
        m_cur_index = 0;
    }
    void next() override{
        m_cur_index++;
    }
    bool end() override{
        return m_cur_index >= m_container.size();
    }
    Item currentItem() override {
        return m_container.at(m_cur_index);
    }
 };

template <class Item>
class Container{
private:
    vector<Item> m_list;
public:
    explicit Container(){}
    ~Container(){}
    ConcreteIterator<Item, Container<Item>> getIterator(){
        return ConcreteIterator<Item, Container<Item>>(*this);
    }
    void add(const Item& item){
        m_list.push_back(item);
    }
    int size(){
        return m_list.size();
    }
    Item at(const int index) const {
        return m_list[index];
    }
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
    auto it = container.getIterator();
    for(it.begin(); !it.end();it.next()){
        cout << "item: " << it.currentItem() << std::endl;
    }
    vector<int> vec;
    vector<int>::iterator  iter;
    std::cout << "done\n";
    return 0;
}