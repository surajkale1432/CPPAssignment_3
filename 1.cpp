// 1. Write a operator overloading code to overload all the arithmetic operators to
// add 2 complex no, 1 complex no and int value and one non member function to
// add int and complex no.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

struct Complex
{
    int real;
    int img;

    // setters
    void setReal(int real)
    {
        this->real = real;
    }
    void setImg(int img)
    {
        this->img = img;
    }

    // getters
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
        this->real = 0;
        this->img = 0;
    }
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout << this->real << "+" << this->img << "i";
    }

    // Operator Overloading
    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.real = this->real + c2.real;
        temp.img = this->img + c2.img;
        return temp;
    }
    Complex operator+(int real)
    {
        Complex temp;
        temp.real = this->real + real;
        temp.img = this->img;
        return temp;
    }
    Complex operator-(Complex c1)
    {
        Complex temp;
        temp.real = this->real - c1.real;
        temp.img = this->img - c1.img;
        return temp;
    }
    Complex operator*(Complex c2)
    {
        Complex temp;
        temp.real = this->real * c2.real;
        temp.img = this->img * c2.img;
        return temp;
    }
};
Complex operator+(int real, Complex c1)
{
    Complex temp;
    temp.real = c1.real + real;
    temp.img = c1.img;
    return temp;
}
int main()
{
    Complex c1, c2(20, 30), c3, c4, c5, c6, c7;
    int real, img;

    cout << "\nEnter C1 Values\nreal = ";
    cin >> real;

    cout << "\nimginary = ";
    cin >> img;

    c1.setReal(real);
    c1.setImg(img);
    cout << "\nC1 values\t";
    c1.display();
    cout << "\n\nC2 values\t";
    c2.display();

    c3 = c1 + c2; // c1.operator+(c2);
    c4 = c3 - c1; // c3.operator-(c1);
    c5 = c1 * c2; // c1.operator*(c2);

    cout << "\n\nc1+c2\t";
    c3.display();
    cout << "\n\nc3-c1\t";
    c4.display();
    cout << "\n\nc1*c2\t";
    c5.display();

    c6 = c1 + 10;
    c7 = 10 + c2;

    cout << "\n\nc1+10\t";
    c6.display();
    cout << "\n\n10+c2\t";
    c7.display();
}