/*WAP to add two complex number use constructor to initialize data member of complex number.*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,imaginary;
    public:
    Complex(int x,int y)
    {
        real=x;
        imaginary=y;
    }
    Complex(Complex &obj)
    {
        real=obj.real;
        imaginary=obj.imaginary;
    }
    void read()
    {
        cout<<"Real=";
        cin>>real;
        cout<<"Imaginary=";
        cin>>imaginary;
    }
    void display()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }

};
int main()
{
    Complex obj1(10,15);
    obj1.read();
    obj1.display();
    Complex obj2(obj1);
    obj2.read();
    obj2.display();
    Complex obj3=obj1.real+obj2.real;
    return 0;
}