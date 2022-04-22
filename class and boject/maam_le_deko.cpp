/*Define a class,student with attributes of student as data member and member function 
to initilize and display the data.WAP to input input and display records of 50 student*/
#include<iostream>
using namespace std;
class Student
{
    char name[50];
    int rollno;
    int regno;
    public:
    void read();
    void display();
};
int main()
{
int i;
Student s1,s2;
for(i=1;i<=50;i++)
{
    s1.read();
}
for(i=1;i<=50;i++)
{
s1.display();
}
return 0;
}
void Student::read()
{
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the rollno:"<<endl;
    cin>>rollno;
    cout<<"Enter the registration no:"<<endl;
    cin>>regno;
}
void Student::display()
{
    cout<<"Name          :"<<name<<endl;
    cout<<"Roll no       :"<<rollno<<endl;
    cout<<"Registratation:"<<regno<<endl;
}