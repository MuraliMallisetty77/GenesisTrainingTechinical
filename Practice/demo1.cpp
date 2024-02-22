#include<iostream>
#include<thread>
#include<condition_variable>
#include<mutex>
#include<vector>

std::condition_variable cv;
bool flag =false;
std::mutex mt;

void square(std::vector<int>& data)
{
    std::unique_lock<std::mutex> uk(mt);
    cv.wait(uk,[](){return flag;});
    for(int val:data)
    {
        std::cout<<"square:"<<val*val<<"\n";
    }

}
void cube(std::vector<int>& data)
{
    std::unique_lock<std::mutex> uk(mt);
    cv.wait(uk,[](){return flag;});
    for(int val:data)
    {
        std::cout<<"cube:"<<val*val*val<<"\n";
    }

}

int main()
{
    std::vector<int> data{1,2,3,4};
    std::thread t1(square,std::ref(data));
    std::thread t2(cube,std::ref(data));
    flag=true;
    cv.notify_all();
   
    for(int val:data)
    {
        std::lock_guard<std::mutex> lk(mt);
        std::cout<<"Cube:"<<val*val*val<<"\n";
        
    }

    t1.join();
    t2.join();
    

}