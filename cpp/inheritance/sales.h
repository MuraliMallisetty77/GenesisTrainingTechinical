#include"employee.h"
class sales:public Employee
{
    double amount;
    double crate;
    public:
        sales();
        sales(int,const char *,double,double,double);
        ~sales();
        void accept();
        void display();
        double calculateTotalSalary();
        void show();
        friend std::ostream& operator<<(std::ostream &os ,sales &s);
        friend std::ostream& operator<<(std::ostream &os ,sales *s);

};