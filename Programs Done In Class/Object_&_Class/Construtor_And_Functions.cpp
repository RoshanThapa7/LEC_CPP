#include <iostream>
using namespace std;

// Class definition
class Class
{
private:
    int attribute;

public:
    // constructor(default)
    Class()
    {
        attribute = 0;
    }

    //  constructor(parameterized)
    Class(int value)
    {
        attribute = value;
    }

    // Getter method for attribute
    int getAttribute()
    {
        return attribute;
    }

    // Member function
    void memberFunction()
    {
        cout << "This is a member function." << endl;
    }
};

// Non-member function
void nonMemberFunction()
{
    cout << "This is a non-member function." << endl;
}

int main()
{
    // Create an object using default constructor
    Class obj1;

    // Create an object using parameterized constructor
    Class obj2(5);

    // Accessing attributes using getter method and calling member functions
    cout << "Attribute of obj1: " << obj1.getAttribute() << endl;
    obj1.memberFunction();

    cout << "Attribute of obj2: " << obj2.getAttribute() << endl;
    obj2.memberFunction();

    // Calling non-member function
    nonMemberFunction();

    return 0;
}
