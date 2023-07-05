#include <iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int x)
    {
        a=x;
    }
    A operator ++()
    {
        ++a;
    }
    void display(){
        cout<<a<<endl;
    }
    A operator ++(int){
        a++;

    }
};

int main()
{
   A a(100);
   ++a;
   a.display();
    a++;
     a.display();
 
     return 0;
}