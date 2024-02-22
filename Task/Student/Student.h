#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<cstring>
class Student
{
    protected:
    int id;
    char name[30];
    int marks;
    static int n;
    public:
    Student();
    Student(const char*,int);
    virtual ~Student();
    virtual void accept();
    virtual void display();
    friend std::ostream& operator<<(std::ostream &os,Student &s);

    int getId() const { return id; }
    void setId(int id_) { id = id_; }
    void setName(const char *n)
    {
        strcpy(name,n);
    }
    char* getName()
    {
        return name;
    }

    int getMarks() const { return marks; }
    void setMarks(int marks_) { marks = marks_; }
};

#endif // STUDENT_H
