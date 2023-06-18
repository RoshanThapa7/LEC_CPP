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
    Vehicle(int pnum)
    {
        platenumber=pnum;
        cout<<"The platenumber is : "<<pnum;
    }

};
int main()
{
    Vehicle scooter(208);//object
    
}