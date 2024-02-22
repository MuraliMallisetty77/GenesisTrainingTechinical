#include <cstring>
#include<iostream>
class Product{
    //name,price,descr,add(),discount();
    private:
        int pid;
        char *name;
        int price;
        static int gid;
    public:
        Product();
        Product(const char* name,int p);
        void accept();
        // cout<<p; lhs  rhs
        friend void operator<<(std::ostream &os,Product &p){ // friend beacuse ostrem have some pivate construtor;
            os<<"------------------------------------------------------------"<<std::endl;
            os<<"product id: "<<p.pid<<"  name :"<<p.name<<"  Price :"<<p.price<<std::endl;
            os<<"------------------------------------------------------------"<<std::endl;
        }
        ~Product(){
          //  std::cout<<"destructor"<<std::endl;
            delete []name;
        }
        int getPrice() const { return price; }
        void setPrice(int price_) { price = price_; }
        char *getName() const { return name; }
        void setName(char *name_) { 
            strcpy(name,name_);
        }  
        int getPid() const { return pid; }
        void setPid(int pid_) { pid = pid_; }
};

void displayMenu();
void displayProducts(Product arr[],int n);
void searchProduct(Product arr[],int n);
void doSearch(Product arr[],int n,char *search);
void modifyProduct(Product arr[],int n);
void doModify(Product arr[],int n,char *search);
// 1. create class getter and setter;
// 2. constructors-> default and parameters;
// 3. to display the object I am using the operator 

// In overloading we have to compulsory pass the friend and reference;