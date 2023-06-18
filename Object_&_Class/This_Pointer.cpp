#include <iostream>
using namespace std;
class a
{
    int x;

public:
    void getNum(int x)
    {
        this->x=x; //this pointer banayo because x=x ma x kun wala ho bujnai sakdena
    }              //this x le a1 ko address lincha

    void showNum()
    {
        cout << x;
    }
};

int main()
{
    a a1;
    a1.getNum(10);
    a1.showNum();
}