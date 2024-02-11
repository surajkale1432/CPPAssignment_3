// 2. Write a operator overloading code to overload all the arithmetic operators to
// add 2 distances, 1 distance and int value and one non member function to add
// int and distance.

#include <stdio.h>
#include <iostream>
using namespace std;

struct Distance
{
    float inch;
    float feet;

    void setInch(float inch)
    {
        this->inch = inch;
    }
    void setFeet(float feet)
    {
        this->feet = feet;
    }

    //getter
    float getInch()
    {
        return this->inch;
    }
    float getFeet()
    {
        return this->feet;
    }
    //default
    Distance(){
        this->inch=0;
        this->feet=0
    }
    Distance(float inch,float feet)
    {
        this->inch=inch;
        this->feet=feet;
    }

    void display()
    {
        
    }

};