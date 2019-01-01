#include<iostream>
using namespace std;
class Base
{
public :
void display()
{
cout<<"Display Base....."<<endl;
}
virtual void show()
{
cout<<"show base...."<<endl ;
}};
class Derived : public Base
{
public:
void Display()
{
cout<<"Display Derived....."<<endl;
}
 void show()
{
cout<<"show Derived......"<<endl;
}};
int main()
{
Base B;
Derived D;
Base *bptr;
bptr=&B;
bptr-> display();
bptr-> show();
cout<<"bptr point to Derived class...."<<endl;
bptr=&D;
bptr-> display();
bptr-> show();
return 0;
}
