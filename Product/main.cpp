#include<iostream>
#include "prod.h"

int main()
{   
    int n=10;
    //Product arr[n];// here both cases the constructor calls;
    Product *arr=new Product[n];
    int curr=0;
    // loop start:   
    int option;
    while (1)
    {
       displayMenu();
       std::cin>>option;
       if(option==5){
        break;
       }
       switch (option)
       {
       case 1:
            // taking input;
                arr[curr++].accept();
                break;
       case 2:
                displayProducts(arr,curr);// curr is the size;
                break;
        case 3:
                //Search Product;
                searchProduct(arr,curr);
                break;
        case 4:
                // Modify Product:
                modifyProduct(arr,curr);
                break;
       default:
            std::cout<<"You entered the wrong option please enter correct one"<<std::endl;
            break;
       }
    }
    std::cout<<"byee";
    delete []arr; // is used to free the memory;
    return 0;
}
