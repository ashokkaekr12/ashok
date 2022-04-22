/*Define a class person that contain appropriate member for storing 
name,age ,gender,telephone no,write member function to read and display the data */
#include<iostream>
using namespace std;
class Person
{
 private:
      char name[30];
      int age;
      char gender[50];
      int telephone;
public:
void read();
void display();
};
void Person::read()
{
   cout<<"Enter name:";
   cin>>name;
   cout<<"Enter age:";
   cin>>age;
   cout<<"Enter gender:";
   cin>>gender;
   cout<<"Enter telephone:";
   cin>>telephone;
}
void Person::display()
{
    cout<<"Name="<<name<<endl<<"age="<<age<<endl<<"gender="<<gender<<endl<<"telephone="<<telephone; 
}
int main()
{
    Person p1;
    p1.read();
    p1.display();
    
}
