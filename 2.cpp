// 2. Write a operator overloading code to overload all the arithmetic operators to
// add 2 distances, 1 distance and int value and one non member function to add
// int and distance.

#include <stdio.h>
#include <iostream>
using namespace std;
struct Distance
{
    int inch;
    int feet;

    void setInch(int inch)
    {
        this->inch = inch;
    }
    void setFeet(int feet)
    {
        this->feet = feet;
    }

    // getter
    int getInch()
    {
        return this->inch;
    }
    int getFeet()
    {
        return this->feet;
    }
    // default
    Distance()
    {
        this->inch = 0;
        this->feet = 0;
    }
    Distance(int inch, int feet)
    {
        this->inch = inch;
        this->feet = feet;
    }
    Distance operator+(Distance d2)
    {
        Distance temp;
        temp.feet = this->feet + d2.feet;
        temp.inch = this->inch + d2.inch;
        return temp;
    }
    Distance operator+(int feet)
    {
        Distance temp;
        temp.feet = this->feet + feet;
        temp.inch = this->inch;
        return temp;
    }
    Distance operator*(Distance d2)
    {
        Distance temp;
        temp.feet = this->feet * d2.feet;
        temp.inch = this->inch * d2.inch;
        return temp;
    }

    void display()
    {
        cout << "\nDistance\nFeet&Inch = " << this->feet << "'" << this->inch;
    }
};
Distance operator+(int feet, Distance d2)
{
    Distance temp;
    temp.feet = feet + d2.getFeet();
    temp.inch = d2.getInch();
    return temp;
}
int main()
{
    Distance d1, d2(20, 5), d3, d4, d5, d6;

    d1.setFeet(6);
    d1.setInch(7);

    cout<<"\nd1\n";
    d1.display();
    cout<<"\nd2\n";
    d2.display();
    d3 = d1 + d2;
    cout<<"\n\nd1+d2\n";
    d3.display();
    d4 = d1 + 10;
    cout<<"\n\nd1+10";
    d4.display();
    d5 = 20 + d2;
    cout<<"\n\n20+d2";
    d5.display();
    cout<<"\n\nd6 = d1 * d2\n";
    d6 = d1 * d2;
    d6.display();
}