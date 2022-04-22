#include<iostream>
using namespace std;
class Student
{
    char name[30];
    int roll;
    int regNo;
   public:
   void read();
   void display();
};
int main()
{
Student s1,s2;
s1.read();
s1.display();
return 0;
}
void Student::read()
{
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the roll:"<<endl;
    cin>>roll;
    cout<<"Enter the registration no:"<<endl;
    cin>>regNo;
}
void Student::display()
{
    cout<<"Name          :"<<name<<endl;
    cout<<"Roll no       :"<<roll<<endl;
    cout<<"Registratation:"<<regNo<<endl;
}