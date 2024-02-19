// 3. Write a operator overloading code to overload logical operator for complex and distance.
#include <stdio.h>
#include <iostream>
using namespace std;

struct Complex
{
    int real;
    int img;

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

    void display()
    {
        cout << this->real <<"+"<< this->img << "i";
    }
    Complex operator&&(Complex c2)
    {
        Complex temp;
        temp.real = this->real && c2.real;
        temp.img = this->img && c2.img;
        return temp;
    }
    Complex operator||(Complex c2)
    {
        Complex temp;
        temp.real = this->real || c2.real;
        temp.img = this->img || c2.img;
        return temp;
    }

    int operator!()
    {
        if(this->real==0)
        {
            return 1;
        }
        else
        return 0;
    }
};
int main()
{
    Complex c1, c2(34, 9), c3, c4, c5;
    int real, img, ans;
    cout << "\nEnter C1 Values\nreal = ";
    cin >> real;
    cout << "\nimg = ";
    cin >> img;
    // Complex c1(real,img);
    c1.setReal(real);
    c1.setImg(img);

    c3 = c1 && c2;
    cout << "\nC1 Values\n";
    c1.display();
    cout << "\nC2 Values\n";
    c2.display();
    cout << "\nC1 && C2\n";
    if (c3.getReal())
    {
        cout << "\nC1.real & C2. Real both are nonZero";
    }
    else
    {
        cout << "\nC1.real or C2.real anyone of them is Zero or Both are zero";
    }
    cout << "\nC1 || C2\n";
    if (c3.getReal())
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
