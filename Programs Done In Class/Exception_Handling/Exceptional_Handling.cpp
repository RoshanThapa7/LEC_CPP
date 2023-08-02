#include <iostream>
using namespace std;

int main()
{
    int a, b, x = 0;

    cout << "Enter values of a" << endl;
    cin >> a;
    cout << "enter value of b" << endl;
    cin >> b;
    try
    {
        if (a == b)
        {
            throw x;
        }
        else
        {
            x = a / (a - b);
            cout << "value of x is : " << x << endl;
        }
    }
    catch (int x)
    {
        cout << "Math Error";
    }
    return 0;
}