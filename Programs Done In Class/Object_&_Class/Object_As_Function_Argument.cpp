#include <iostream>
using namespace std;
class student
{
    public:
    double marks;
    student(int mark)
    {
        double m;
        marks = mark;
    }
};

void avg(student s1,student s2)
{
    double avg;
    avg = s1.marks + s2.marks / 2;
    cout << "The average is : " << avg << endl;
}
int main()
{
    student s1(100), s2(120);

    avg(s1,s2);
}
