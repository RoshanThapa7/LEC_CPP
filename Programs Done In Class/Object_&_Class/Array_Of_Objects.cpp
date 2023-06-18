//ArrayOfObjects //ObjectArray
#include<iostream>
using namespace std;

class student
{
    string name;
    int age;

    public:
    void getValue()
    {
        cin>>name;
        cin>>age;
    }
    void showValue()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

int main()
{
    student s1[10];
    
    for(int i=0;i<5;i++)
    {
        s1[i].getValue();
    }
    for(int i=0;i<5;i++)
    {
        s1[i].showValue();
    }
}