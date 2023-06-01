#include <iostream>
using namespace std;
class a
{
public:
    int data;
    void getData()
    {
        cout << "Enter value of data : " << endl;
        cin >> data;
    }
    void showData()
    {
        cout << "The data is : " << data;
    }
};

class b
{
public:
    a A;
    int b;
    void getData()
    {
        A.getData();
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void showData()
    {
        A.showData();
        cout << "The value of b is : " << b << endl;
    }
};

int main()
{
    b B;
    B.getData();
    B.showData();
}