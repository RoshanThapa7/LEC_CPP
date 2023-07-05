#include<iostream>
using namespace std;

class A
{
    int a,b,c;
    public:
    A(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
 A operator -()
{
    a=-a;
    b=-b;
    c=-c;
}
    void Display()
{
    cout<<a<<endl<<b<<endl<<c;
}
};

int main()
{
    A a(10,-40,30);
    -a;
    a.Display();
}