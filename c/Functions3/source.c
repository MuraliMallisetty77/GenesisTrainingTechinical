#include<stdio.h>
#include"header.h"
#include<math.h>

int checkprime(int n)
{
    int i,flag=1;;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag=0;
    }
    if(flag)
    return 1;
    else
    return 0;
}
int nextprime(int n)
{
    if(checkprime(++n))
    return n;
    else
    nextprime(n);
}

int lychrel(int n)
{
    int rev=0,rev1=0,rem,b;
    int temp=n;
    int sum=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    sum=temp+rev;
    int temp2=sum;
    while(sum!=0)
    {
        b=sum%10;
        rev1=rev1*10+b;
        sum/=10;
    }
    if(temp2==rev1)
    return 1;
    else
    return 0;
}

int perfect(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    return 1;
    else
    return 0;   
}

int palprime(int n)
{
    int rem,rev=0,i,flag=1;
    int temp=n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag=0;
    }
    if(flag)
    {
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        if(temp==rev)
        return 1;
        else
        return 0;
    }
    else
    return 0;
}

int neon(int n)
{
    int rem;
    int sqr=n*n;
    int sum=0;
    while(sqr!=0)
    {
        rem=sqr%10;
        sum+=rem;
        sqr/=10;
    }
    if(n==sum)
    return 1;
    else
    return 0;   
}

int spy(int n)
{
    int rem;
    int sum=0,pro=1;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        pro*=rem;
        n/=10;
    }
    if(sum==pro)
    return 1;
    else
    return 0;   
}
int gcd(int a,int b)
{
    int i=1,gcd;
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
        i++;
    }
    return gcd;

}

int lcm(int a,int b)
{
    /*int i=1,gcd;
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
        i++;
    }
    return (a*b)/gcd;*/
    int max=a>b?a:b;
    while(max)
    {
        if(max%a==0 & max%b==0)
        {
            return max;
        }
        max++;
    }

}
int automorpic(int n)
{
    int sq=n*n;
    int flag=1;
    while(n!=0) 
    {
        if(n%10!=sq%10)
        flag=0;
        n/=10;
        sq/=10;
    }
    if(flag)
    return 1;
    else
    return 0;
}

int decToBin(int n)
{
    int rem,res=0;
    int i=1;
    while(n!=0)
    {
        rem=n%2;
        res=res+rem*i;
        n/=2;
        i*=10;
    }
    return res;
}
int binToDec(long n)
{
    int rem;
    int sum=0,count=0;
    int t1=n,t2=n;
    int i;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    
    for(i=0;t2!=0;i++,t2/=10)
    {
        rem=t2%10;
        sum+=rem*power(2,i);
    }
    return sum;
}
int power(int b,int p)
{
    int sum=1;
    while(p!=0)
    {
        sum=sum*b;
        p--;

    }
    return sum;
    
}

int armstrong(int n)
{
    int count=0,rem;
    int temp=n,sum=0,temp2=n;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    while(temp!=0)
    {
        rem=n%10;
        //sum+=pow(rem,count);
        temp/=10;
    }
    if(temp2==sum)
    return 1;
    else
    return 0;
    
}