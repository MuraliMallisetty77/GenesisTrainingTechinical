#include<stdio.h>
void sum(int (*p)(int,int))
{
    p(3,4);
}
void test(void (*p)())
{
    p();

}
void show()
{
    printf("hello\n");
}
int add(int a,int b)
{
    printf("%d",(a+b));
}
void main()
{
    test(show);
    sum(add);
    void (*p)()=show;
    int (*ptr)(int,int)=add;
    //p();
    //ptr(10,20);

}