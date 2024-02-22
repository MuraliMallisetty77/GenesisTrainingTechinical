#include<iostream>
#include<cstring>
class LowBalanceException:public std::exception
{
    char msg[100];
    public:
        LowBalanceException()
        {
            strcpy(msg,"Low balance");
        }
        LowBalanceException(const char *m)
        {
            strcpy(msg,m);
        }
        char* what()
        {
            return msg;
        }

};
class Account
{
    int balance;
    public:
        Account()
        {
            balance=5000;
        }
        Account(int b):balance(b)
        {


        }
        void withdraw(int amt)
        {
            if(balance-amt<=5000)
                throw LowBalanceException("Balance less than 5000");
            std::cout<<"\ncalled\n";
            balance=balance-amt;
        }
};
int main()
{
    Account a(10000);
    try
    {
        a.withdraw(4000);
        a.withdraw(2000);
    }
    catch(LowBalanceException l)
    {
        std::cout<<l.what()<<std::endl;
    }

    return 0;
}