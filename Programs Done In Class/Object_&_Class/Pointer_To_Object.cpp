// pointer_to_object
#include <iostream>
using namespace std;

class employee
{
    char name[20];
    float salary;

public:
    void getData()
    {
        cout << "\nEnter name : ";
        cin >> name;
        cout << "\nEnter Salary : ";
        cin >> salary;
    }
    void showData()
    {
        cout << "\nNAME: " << name << endl;
        cout << "\nSALARY :" << salary << endl;
    }
};

int main()
{
    employee *eptr;
    employee e;
    eptr = &e;
    eptr->getData();
    cout << "\nAccessing data tgrough pointer variable :";
    eptr->showData();
    return 0
}