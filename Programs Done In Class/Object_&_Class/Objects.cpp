#include <iostream>
#include <string>
using namespace std;

class fod
{
public:
    string name;
    string address;
    int number;

    fod()
    {
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter address : "<<endl;
        cin>>address;
        cout<<"Enter number : "<<endl;
        cin>>number;
    }
};

int main()
{
    fod f1,f2;
    f1.name;
    f2.name;
    f1.address;
    f2.address;
    f1.number;
    f2.number;
    cout<<"Name of my first friend is : "<<f1.name<<endl;
    cout<<"Address of my first friend is : "<<f1.address<<endl;       
    cout<<"Number of my first friend is : "<<f1.number<<endl;
    cout<<"Name of my second friend is : "<<f2.name<<endl;
    cout<<"Address of my second friend is : "<<f2.address<<endl;
    cout<<"Number of my second friend is : "<<f2.number<<endl;
}