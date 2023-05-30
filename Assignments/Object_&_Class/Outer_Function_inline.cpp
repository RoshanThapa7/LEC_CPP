// outfuncinline.cpp
// making outer function inline using namespace std;

#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    char name[20];
    char phone[10];

public:
    void getdata(); // function declaration
    void showdata();
};

inline void student::getdata() // function definition
{
    cout << "\nEnter Roll No: ";
    cin >> roll;
    cout << "Enter Phone Number: ";
    cin >> phone;
    cout << "Enter Name: ";
    cin >> name;
}

inline void student::showdata()
{
    cout << "Name: " << name << endl;
    cout << "Roll No: " << roll << endl;
    cout << "Phone Number: " << phone << endl;
}