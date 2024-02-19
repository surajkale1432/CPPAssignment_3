// 3. Write a operator overloading code to overload logical operator for complex and
// distance.
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
    void display()
    {
        cout<<"\nFeet = "<<this->feet;
        cout<<"\nInch = "<<this->inch;
    }
    Distance operator&&(Distance d2)
    {
        Distance temp;
        temp.feet = this->feet && d2.feet;
        temp.inch = this->inch && d2.inch;
        return temp;
    }
    Distance operator||(Distance d2)
    {
        Distance temp;
        temp.feet = this->feet && d2.feet;
        temp.inch = this->inch && d2.inch;
        return temp;
    }
    int operator!()
    {
        if (this->feet == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Distance d1, d2(10, 20), d3, d4, d5;
    int feet, inch, ans;
    cout << "\nEnter D1 Values\nfeet = ";
    cin >> feet;
    cout << "\ninch = ";
    cin >> inch;

    d1.setFeet(feet);
    d1.setInch(inch);

    d3 = d1 && d2;
    cout << "\n\nD1 Values";
    d1.display();
    cout << "\n\nD2 Values";
    d2.display();

    cout << "\nD1 && D2\n";
    if (d3.getFeet())
    {
        cout << "\nD1.Feet & D2.Feet both are nonZero";
    }
    else
    {
        cout << "\nD1.Feet or D2.Feet anyone of them is Zero or Both are zero";
    }
    cout << "\nD1 || D2\n";
    d4 = d1 || d2;
    if (d4.getFeet())
    {
        cout << "\nD1.feet or D2.feet Anyone of them is NonZero or both are non zero";
    }
    else
    {
        cout << "\nD1.feet and D2.feet Both are zero";
    }
    if (!d1)
    {
        cout << "\n\n!D1.Feet has zero value";
    }
    else
    {
        cout << "\n\nD1.Feet has non zero value";
    }
}