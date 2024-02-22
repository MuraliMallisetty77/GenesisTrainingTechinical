#include<cstring>
class Student1
{
    int rollno;
    char name[20];
    int marks;
    static int n;
    static int n1;
    public:
        Student1();
        Student1(const char*,int);
        void accept();
        void display(); 
        void setName(const char *nam)
        {
            strcpy(name,nam);
        }
        char* getName()
        {
            return name;
        }

        int getMarks() const { return marks; }
        void setMarks(int marks_) { marks = marks_; }

        int getRollno() const { return rollno; }
        void setRollno(int rollno_) { rollno = rollno_; }      
};