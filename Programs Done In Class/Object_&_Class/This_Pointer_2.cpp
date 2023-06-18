#include <iostream>
using namespace std;

class mobile
{
    int m=10;

    public:
    void display()
    {
        cout<<"Value of m is : "<<m<<endl;
        cout<<"Value of what is : "<<this->m<<endl;//this-> le 'yo object ko' bhaneko ho so m object ma point garya
        cout<<"The address of current object is : "<<this<<endl;//this le object ko address print garayo
    }
};

int main()
{
    mobile m1,m2;
    m1.display();
    m2.display();
}