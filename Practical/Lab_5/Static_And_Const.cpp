#include <iostream>
using namespace std;

class A
{
    const int co = 100;
    static int stc;
public:
    void cot()
    {
        cout << "const " << co << endl;
        // const++ cannot be done as constant variable cannot be modified
    }
    void normal()
    {
        int abc = 200;
        cout << "Normal " << abc << endl;
        abc++;
        cout << "Normal " << abc << endl;
    }
    void st()
    {
        cout << "Static " << stc << endl;
        stc++;
        cout << "Static " << stc << endl;
    }
};
int A::stc;
int main()
{
    A a;
    a.st();
    a.cot();
    a.normal();
    a.st();
    a.normal();
}