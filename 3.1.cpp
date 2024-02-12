// 3. Write a operator overloading code to overload logical operator for complex and distance.
#include <stdio.h>
#include <iostream>
using namespace std;

struct Complex
{
    int real;
    int img;

    void setReal(int real)
    {
        this->real = real;
    }
    void setImg(int img)
    {
        this->img = img;
    }

    int getReal()
    {
        return this->real;
    }
    int getImg()
    {
        return this->img;
    }

    Complex()
    {
        this->real=0;
        this->img=0;
    }
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void display()
    {
        cout<<this->real<<this->img<<"i";
    }
    Complex operator&&(Complex c2)
    {

    }
};
int main()
{
    Complex c1,c2(34,9),c3,c4,c5;
    int real,img;
    cout<<"\nEnter C1 Values\nreal = ";
    cin>>real;
    cout<<"\nimg = ";
    cin>>img;


}
