/*WAP  to define a class player with data member name,country*/
#include<iostream>
using namespace std;
class Player
{
    char name[10];
    char county[10];
    char team[10];
    int score;
    public:
    void input();
    void display();
    void compare(Player *ptr);
};
int main()
{
    int size;
    cout<<"Enter number of player:";
    cin>>size;
    Player*ptr;
    ptr= new Player[size];
    cout<<"Enter player datails:";
    for(int i=0;i<size;i++)
    {
        ptr[i].input();
    }
    compare(ptr,size);
    delete[]ptr;
    ptr=NULL;
    return 0;

}
void Player::compare(Player *P,int size)
{
Player *max;
max=P;
for(int i=0;i<size;i++)
{
    if(max<(ptr+i))
}

}