#include<iostream>
#include"online.h"
#include"offline.h"
 
int main()
{
    Training *t=new Online("Samba","CPP","34hgfd","kjhgf");
    Online *o=dynamic_cast<Online*>(t);
    //t->enroll();
    t->startTraining();
    t->issueCertificate();
    if(o!=0)
        o->fillForm();
    else
        std::cout<<"\ncasting not possible";
    t->display();

    Training *t1=new Offline("Chandra","Python","Hyd",200);
    t1->startTraining();
    t1->issueCertificate();
    t1->display();

    delete t;
    delete t1;

    // Online o1("Murali","Java","jhgf0986","9876kjh");
    // std::cout<<o1;
    return 0;
}
