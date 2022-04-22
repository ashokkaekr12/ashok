#include<iostream>
using namespace std;
class Test
{
    int count;
    public:
    Test()
    {
        count=0;
        count++;
        cout<<"The value of count is:"<<count<<endl;
    }
    ~Test()
    {
        count++;
        cout<<"The value of count is:"<<count;
    }
};
int main()
{
    Test t1;
    return 0;
}