#include<iostream>
using namespace std;

class Vehicle{
    private:
    int platenumber;//attribute

    public:
    int getnumber(){//method
        int a;
        cout<<"Enter the number of scooter";
        cin>>platenumber;
        a=platenumber;
        return a;
    }

};
int main()
{
    Vehicle scooter;//object
    
    cout<<"The scooter platenumber is"<<scooter.getnumber();
}