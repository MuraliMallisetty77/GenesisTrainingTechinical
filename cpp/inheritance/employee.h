#include<cstring>
class Employee
{
    int id;
    char name[100];
    double salary;
    public:
        Employee();
        Employee(int ,const char *,double);
        virtual ~Employee();
        virtual void accept();
        virtual void display();
        virtual double calculateTotalSalary();
        friend std::ostream& operator<<(std::ostream &os ,Employee &e);
        friend std::ostream& operator<<(std::ostream &os ,Employee *e);

        double getSalary() const { return salary; }
        void setSalary(double salary_) { salary = salary_; }

        int getId() const { return id; }
        void setId(int id_) { id = id_; }
        void setName(const char*n)
        {
            strcpy(name,n);
        }
        char* getName()
        {
            return name;
        }
};
