#include<iostream>
using namespace std;
class Complexnum
{
    int real;
    int imaginary;
    public:
    void getdata()
    {
        cout<<"Enter the value of real and imaginary:";
        cin>>real>>imaginary;
    }
    void display();
    Complexnum add(Complexnum);
};
void Complexnum::display()
{
    cout<<real<<" + "<<imaginary<<"i"<<endl;
}
int main()
{
    Complexnum i1,i2,i3;
    i1.getdata();
    i2.getdata();
    i1.display();/. 
    i2.display();
    i3=i1.display(i2);



    return 0;
}
