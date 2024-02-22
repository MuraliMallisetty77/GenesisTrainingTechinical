#include<iostream>
#include<cstring>
#include "Medstudent.h"

int MedStudent::n=321;
MedStudent::MedStudent()
{
    id=n;
    strcpy(name,"Uday");
    marks=78;
}

MedStudent::MedStudent(const char *na, int m):Student(na,m)
{
    id=n++;
}

MedStudent::~MedStudent()
{
    std::cout<<"\n~MedStudent() called";
}

void MedStudent::accept()
{
    id=n++;
    Student::accept();
}

void MedStudent::display()
{
    Student::display();
}

void MedStudent::earnLicense()
{
    std::cout<<"\nMedical student need to earn license";
}
std::ostream& operator<<(std::ostream &os,MedStudent &s)
{
    s.display();
    return os;
}

