#include<stdio.h>
#include<string.h>


struct student{
    int roll;
    char name[20];
    float fee;

};
void main()
{
    struct student s={2,"Ravi",300000};
    struct student s1;
    s1=s;
    //s.roll=1;
    //strcpy(s.name,"Murali");
    //s.fee=10000;
    s1.roll=10;
    s1.fee=6000000;
    strcpy(s1.name,"varma");


    printf("Roll no:%d\nName:%s\nfee:%f\n",s.roll,s.name,s.fee);

}