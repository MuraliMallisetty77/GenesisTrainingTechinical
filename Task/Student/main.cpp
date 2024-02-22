#include<iostream>
#include"Engstudent.h"
#include"Medstudent.h"
#include<cstring>
int main()
{
    Student *s=new EngStudent("varma",90);
    EngStudent *e=dynamic_cast<EngStudent*>(s);
    //s->accept();
    e->learnLanguages();
    s->display();

    Student *s1=new MedStudent("Samba",94);
    MedStudent *m=dynamic_cast<MedStudent*>(s1);
    if(m!=0)
       m->earnLicense();
    else
        std::cout<<"\ncasting not possible";
    s1->display();
   
    delete s;
    delete s1;


    return 0;
}

