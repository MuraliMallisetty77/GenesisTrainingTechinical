#ifndef TRAINING_H
#define TRAINING_H

#include<cstring>
class Training
{
    protected:
        char courseName[20];
        char cname[20];
        int duration;
        static int n;
    public:
        Training();
        Training(const char*,const char*);
        virtual ~Training();
        virtual void enroll();
        virtual void startTraining();
        virtual void issueCertificate();
        virtual void display();
        friend std::ostream& operator<<(std::ostream &os,Training &t);

        void setCName(const char* t)
        {
            strcpy(cname,t);
        }
        char* getCName()
        {
            return cname;
        }
        void setCourseName(const char* c)
        {
            strcpy(courseName,c);
        }
        char* getCourseName()
        {
            return courseName;
        }
        int getDuration() const { return duration; }
        void setDuration(int duration_) { duration = duration_; }
};

#endif // TRAINING_H
