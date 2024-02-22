#ifndef HEADER_H
#define HEADER_H

class Rectangle
{
    int length;
    int breadth;
    public:
        Rectangle();
        Rectangle(int,int);
        ~Rectangle();
        void accept();
        void display();
        int calPeri(int ,int);
        int calArea(int,int);
        int calaculate();

        int getLength() const { return length; }
        void setLength(int length_) { length = length_; }

        int getBreadth() const { return breadth; }
        void setBreadth(int breadth_) { breadth = breadth_; }
};

#endif // HEADER_H
