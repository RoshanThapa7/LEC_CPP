// defoutside.cpp
// definition outside the class

#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    char name[20];
    char phone[10];

public:
    void getdata(); // function declaration void showdata();
    void showdata();
}; // end of class

void student::getdata() // function definition
{
    cout << "\nEnter Roll No: ";
    cin >> roll;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Phone Number: ";
    cin >> phone;
}
void student::showdata()
{
    cout << "Name: " << name << endl;
    cout << "Roll No: " << roll << endl;
    cout << "Phone Number: " << phone << endl;
}

int main()
{ 
    student s1,s2;
s1.getdata();
s2.getdata();
cout << "\nfirst student" << endl;

s1.showdata();
cout << "\nsecond student" << endl;

s2.showdata();

return 0;
}
