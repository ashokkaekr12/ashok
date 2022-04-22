#include<iostream>
using namespace std;
class Car
{
    static int count;
    public:
    Car()
    {
        count++;
        cout<<"There are: "<<count<< "number of cars: "<<endl;
    }
    ~Car()
    {
        count--;
        cout<<"There are: "<<count<<"number of cars: "<<endl;
    }
};
int Car::count; 
int main()
{
    cout<<"We are in main"<<endl;
    Car c1,c2,c3,c4;
    {
        cout<<"we are in block 1"<<endl;
        Car c5;
    }
    {
        cout<<"We have reentered main"<<endl;
    }
  return 0;
}
