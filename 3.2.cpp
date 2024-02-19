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
int main()
{
    Distance d1,d2(10,20),d3,d4,d5;
    int feet,inch, ans;
    cout << "\nEnter D1 Values\nfeet = ";
    cin >>feet;
    cout << "\ninch = ";
    cin >>inch;

    d1.setFeet(feet);
    d1.setInch(inch);

    d3 = d1 && d2;
    cout << "\nD1 Values\n";
    d1.display();
    cout << "\nD2 Values\n";
    d1.display();
    d4
    cout << "\nD1 && D2\n";
    if (d3.getFeet() && d2.getFeet())
    {
        cout << "\nD1.Feet & D2.Feet both are nonZero";
    }
    else
    {
        cout << "\nD1.Feet or D2.Feet anyone of them is Zero or Both are zero";
    }
    cout << "\nD1 || D2\n";
    if (d3.getReal() && cd.getReal())
    {
        cout << "\nC1.real OR C2. Anyone of them is NonZero";
    }
    else
    {
        cout << "\nC1.real and C2.real Both are zero";
    }
    if(!c1)
    {
        cout<<"\n\n!c1.real has zero value";
    }
    else{
        cout<<"\n\nc1.real has non zero value";
    }
}