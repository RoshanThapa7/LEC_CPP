#include<iostream>
using namespace std;

class Vehicle{
    private:
    int platenumber;//attribute

    public:
    /*int getnumber(){//method
        int a;
        cout<<"Enter the number of scooter";
        cin>>platenumber;
        a=platenumber;
        return a;
    }*/
    void number(int x)
    {
        platenumber=x;
        cout<<"The platenumber is : "<<platenumber;
    }

};
int main()
{
    Vehicle scooter;//object
    scooter.number(100);
}