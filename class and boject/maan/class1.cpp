#include<iostream>
using namespace std;
class Student
{
    private:
    char name[10];
    int roll;
    public:
    void get();
    void display();
};
int main()
{
    Student s1[50];
    int i;
    for(i=1;i<3;i++)
    {
    s1[i].get();
    }
    for(i=1;i<3;i++)
    {
    s1[i].display();
    }
    return 0;
}
void Student::get()
{
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Roll:"<<endl;
    cin>>roll;
}
void Student::display()
{
    cout<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl;
}
