#include <iostream>
#include <string>
using namespace std;

class fod
{
public:
    string name;
    string address;
    int number;

    fod()
    {
        name = "Rajan";
        address = "Nepalgunj";
        number = 100;
    }
};

int main()
{
    fod f1;
    cout << f1.name << endl;
    cout << f1.address << endl;
    cout << f1.number << endl;
}