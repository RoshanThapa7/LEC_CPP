#include<iostream>
using namespace std;
class Room{
    public:
    int length;
    int breadth;
    int height;
    void get (void)
    {
        cout<<"Enter length : "<<endl;
        cin>>length;
        cout<<"Enter breadth : "<<endl;
        cin>>breadth;
        cout<<"Enter height : "<<endl;
        cin>>height;
    }
    void calculateArea()
    {
       
        cout<<"The Area is : "<<length*breadth<<endl;
    }
    void calculateVolume()
    {
        cout<<"The Volume is : "<<length*breadth*height<<endl;
    }
};
    int main()
    {
        Room obj401;
       
    obj401.get();
        obj401.calculateArea();
        obj401.calculateVolume();
        return 0;
    }