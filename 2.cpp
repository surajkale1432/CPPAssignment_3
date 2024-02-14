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

    //getter
    int getInch()
    {
        return this->inch;
    }
    int getFeet()
    {
        return this->feet;
    }
    //default
    Distance(){
        this->inch=0;
        this->feet=0;
    }
    Distance(int inch,int feet)
    {
        this->inch=inch;
        this->feet=feet;
    }

    void display()
    {
         cout<<"\nDistance\nFeet&Inch = "<<this->inch<<"'"<<this->feet;
    }

};