#include<iostream>
using namespace std;
class Time
{
    private:
    int h,m;
    public:
    void getdata(int,int);
    void putdata();
    void sum(Time,Time);
};
void Time::getdata(int a,int b)
{
    h=a;
    m=b;
}
void Time::putdata()
{
    cout<<"Hour="<<h;
    cout<<"Minute="<<m<<endl;
}
void Time::sum(Time t1,Time t2)
{
    m=t1.m+t2.m;
    h=m/60;
    m=m%60;
    h=h+t1.h+t2.h;
}
int main()
{
    Time t1,t2,t3;
    t1.getdata(3,40);
    t2.getdata(4,30);
    t3.sum(t1,t2);
    t1.putdata();
    t2.putdata();
    t3.putdata();
    return 0;
}