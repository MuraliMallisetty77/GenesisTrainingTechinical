#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    float sal;

};
void accepting(struct employee *);
void display(struct employee);
void main()
{
    // struct employee e1={2,"murali",5000};
    // printf("%d %s %f",e1.id,e1.name,e1.sal);
    // struct employee e2;
    // struct employee *p=&e2;
    // printf("enter name:");scanf("%s",p->name);
    // printf("enter id:");scanf("%d",&p->id);
    // printf("enter sal:");scanf("%f",&p->sal);

    // printf("%d %s %f",e2.id,e2.name,e2.sal);
    struct employee e1;
    accepting(&e1);
    display(e1);
    
    

}
void accepting(struct employee* p2)
{
    printf("enter name:");scanf("%s",p2->name);
    printf("enter id:");scanf("%d",&p2->id);
    printf("enter sal:");scanf("%f",&p2->sal);
    
}
void display(struct employee e1)
{
    printf("%d %s %f",e1.id,e1.name,e1.sal);

}