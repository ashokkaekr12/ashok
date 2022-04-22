#include<iostream>
using namespace std;
class Time
{
    private:
    int hour;
    int minute;
    int second;
    public:
    void getdata(int,int,int);
    void display();
    void sum(Time,Time,Time);
};
void Time::getdata(int x,int y,int z)
{
    hour=x;
    minute=y;
    second=z;
}
void Time::display()
{
    cout<<"Hour="<<hour;
    cout<<"Minute="<<minute;
    cout<<"second="<<second<<endl;
}
void Time::sum(Time t1,Time t2,Time t3)
{
    hour=t1.hour+t2.hour;
}
int main()
{
    Time t1,t2,t3;
    t1.getdata(1,5,20);
    t2.getdata(2,10,30);
    t1.display();
    t2.display();
    return 0;

}
