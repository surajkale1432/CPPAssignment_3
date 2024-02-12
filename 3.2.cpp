// 3. Write a operator overloading code to overload logical operator for complex and 
// distance.
#include<stdio.h>
#include<iostream>
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
        
    }
};