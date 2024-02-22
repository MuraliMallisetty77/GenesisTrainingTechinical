#include<iostream>
#include<set>
#include<memory>
#include<queue>

class Demo
{
private:
    int _id;
    std::string _name;
public:
    Demo()=delete;
    Demo(const Demo&)=delete;
    Demo& operator=(const Demo&)=delete;
    Demo(Demo&&)=default;
    Demo& operator=(Demo&&)=default;
    ~Demo()=default;

    Demo(int id,std::string name):_id(id),_name(name){}

    int id() const { return _id; }
    void setId(int id) { _id = id; }
    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    friend std::ostream &operator<<(std::ostream &os, const Demo &rhs) {
        os << "_id: " << rhs._id
           << " _name: " << rhs._name;
        return os;
    }   

    bool operator<(const Demo& d) const  
    {
        return _id>d._id;
    }

    bool operator>(const Demo& d) const 
    {
        return _id>d._id;
    }
   
};

using pointer=std::shared_ptr<Demo>;

struct comp
{
    bool operator()(const pointer& p1,const pointer& p2) const 
    {
        return p1->id()<p2->id();
    }
};

int main()
{
    std::set<Demo,std::greater<Demo>> s;
    s.emplace(Demo(2,"Murali"));
    s.emplace(Demo(5,"Murali"));
    s.emplace(Demo(10,"Murali"));
    s.emplace(Demo(1,"Murali"));
    s.emplace(Demo(3,"Murali"));

    // std::set<pointer,comp> s;
    // s.emplace(std::make_shared<Demo>(2,"Murali"));
    // s.emplace(std::make_shared< Demo>(5,"Murali"));
    // s.emplace(std::make_shared< Demo>(10,"Murali"));
    // s.emplace(std::make_shared< Demo>(1,"Murali"));
    // s.emplace(std::make_shared< Demo>(3,"Murali"));

    for(const auto& d:s)
    {
        std::cout<<d<<"\n";
    }

    // std::priority_queue<Demo> pq;
    // pq.emplace(Demo(2,"Murali"));
    // pq.emplace(Demo(5,"Murali"));
    // pq.emplace(Demo(10,"Murali"));
    // pq.emplace(Demo(1,"Murali"));
    // pq.emplace(Demo(3,"Murali"));

    // std::priority_queue<pointer,std::vector<pointer>,comp> pq;
    // pq.emplace(std::make_shared<Demo>(2,"Murali"));
    // pq.emplace(std::make_shared<Demo>(5,"Murali"));
    // pq.emplace(std::make_shared<Demo>(10,"Murali"));
    // pq.emplace(std::make_shared<Demo>(1,"Murali"));
    // pq.emplace(std::make_shared<Demo>(3,"Murali"));


    // while(!pq.empty())
    // {
    //     std::cout<<pq.top()<<"\n";
    //     pq.pop();
    // }



    return 0;
}