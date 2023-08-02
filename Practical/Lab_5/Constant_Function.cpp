#include<iostream>
using namespace std;

class A
{
    private:
    int a;
    public:
    void noncons()
    {
        cout<<a<<endl;
        a++;
        cout<<a<<endl;
    }
    void cons() const
    {
        cout<<a<<endl;;
        //a++; cannot be dont as in constant function value cannot be modified
        cout<<a<<endl;
    }
};
int main()
{
    A b;
    b.noncons();
    b.cons();
}