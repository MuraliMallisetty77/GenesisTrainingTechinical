#include<iostream>
#include<thread>
#include<mutex>
#include<future>
#include<vector>

int returnn(std::future<int>& ft)
{
    //std::cout<<"gettting"<<"\n";
    int n=ft.get();
    std::cout<<"ecxe"<<"\n";
    return n*n;

}

int square(std::future<std::vector<int>>& ft)
{
    std::vector<int> data=ft.get();
    return data[0]*data[0];
}

int main()
{
    std::promise<int> pr;
    std::future<int> ft=pr.get_future();
    std::future<int> res=std::async(std::launch::async,returnn,std::ref(ft));

    int n;
    std::cout<<"Enter n:";
    std::cin>>n;
    pr.set_value(n);

    std::promise<std::vector<int>> pr1;
    std::future<std::vector<int>> ft1=pr1.get_future();
    std::future<int> res2=std::async(std::launch::async,square,std::ref(ft1));

    std::vector<int> data{10,2,3};
    pr1.set_value(data);

    std::cout<<res.get()<<"\n";
    std::cout<<res2.get();
}