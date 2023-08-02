#include <iostream>
using namespace std;

class Course
{
public:
    void display()
    {
        cout << "\nThis is base class";
    }
};
class Mathemathics : public Course
{
public:
    void display()
    {
        cout << "\nMath";
    }
};
class Science : public Course
{
public:
    void display()
    {
        cout << "\nScience";
    }
};
class Engineering : public Course
{
public:
    void display()
    {
        cout << "\nEngineering";
    }
};
class Physics : public Science
{
public:
    void display()
    {
        cout << "\nPhysics in Science";
    }
};
class Chemistry : public Science
{
public:
    void display()
    {
        cout << "\nChemistry in Science";
    }
};

int main()
{
    Mathemathics m;
    Physics p;
    Engineering e;
    Chemistry c;

    m.display();
    m.Course::display();
    cout << "\n";

    e.display();
    e.Course::display();
    cout << "\n";

    p.display();
    p.Course::display();
    p.Science::display();
    cout << "\n";

    c.display();
    c.Course::display();
    c.Science::display();

    return 0;
}
