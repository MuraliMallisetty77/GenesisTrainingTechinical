#include<iostream>
#include "prod.h"
#include<cstring>
int Product::gid=101;
Product::Product(){
  //   std::cout<<"default constructor"<<std::endl;
    pid=gid++;
    name=new char[10];
    strcpy(name,"jkl");
    price=10;
}
Product::Product(const char* n,int p){
  //  std::cout<<"Paramter constructor"<<std::endl;
    pid=gid++;
    name=new char[strlen(n)+1];
    strcpy(name,n);
    price=p;
}
void Product::accept(){
    pid=gid++;
    name=new char[20];
    std::cout<<"enter the name:"<<std::endl;
    std::cin>>name;
    std::cout<<"enter the Price:"<<std::endl;
    std::cin>>price;
}

// write methods add , display;

void displayMenu(){
    std::cout<<"Menu"<<std::endl;
    std::cout<<"------------------------"<<std::endl;
    std::cout<<"1.Add Product"<<std::endl;
    std::cout<<"2.Display all products"<<std::endl;
    std::cout<<"3.Search product"<<std::endl;
    std::cout<<"4. Modify Product"<<std::endl;
    std::cout<<"5. To exit"<<std::endl;
    std::cout<<"------------------------"<<std::endl;
}
// display all prods
void displayProducts(Product arr[],int n){
    if(n==0){ // validation
        std::cout<<"no products are available here"<<std::endl;
        return;
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
}

void searchProduct(Product arr[], int n)
{
    try
    {
        std::cout<<"Enter the Product name:"<<std::endl;
        char search[20];
        std::cin>>search;
        doSearch(arr,n,search);

    }
    catch(const char* msg)
    {
        std::cout<<msg;
    }
    
}
void doSearch(Product arr[],int n,char *search){
    bool found=false;
    for(int i=0;i<n;i++){
        if(strcmp(arr[i].getName(),search)==0){
            // we found the value:
            std::cout<<arr[i]; // opeartor overloading;
            found=true;
            return;
        }
    }
    if(found==false){
        throw "Product Not Found !!!";
    }
}
void modifyProduct(Product arr[], int n)
{
    try
    {
        std::cout<<"Enter the Product name:"<<std::endl;
        char search[20];
        std::cin>>search;
        doModify(arr,n,search);

    }
    catch(const char* msg)
    {
        std::cout<<msg;
    }
    
}
void doModify(Product arr[],int n,char *search){
    bool found=false;
    for(int i=0;i<n;i++){
        if(strcmp(arr[i].getName(),search)==0){
            // we found the value:
            // asking the user to modify the price:
            std::cout<<"enter the modified price"<<std::endl;
            int val;
            std::cin>>val;
            arr[i].setPrice(val);
            std::cout<<"the price  modified successfully!!!"<<std::endl;
           // std::cout<<arr[i]; // opeartor overloading;
            found=true;
            return;
        }
    }
    if(found==false){
        throw "Product Not Found !!!";
    }
}