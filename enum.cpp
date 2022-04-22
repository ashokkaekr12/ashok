#include<iostream>
using namespace std;
enum days
{
    sunday=20,
    monday,
    tuesday,
    wednesday,
    thursday=10,
    friday,
    saturday
};
int main()
{
    days d1,d2,d3;
    d1=sunday;
    d2=monday;
    d3=tuesday;
    cout<<"d1="<<d1<<endl<<"d2="<<d2<<endl<<"d3="<<d3;
    return 0;
}