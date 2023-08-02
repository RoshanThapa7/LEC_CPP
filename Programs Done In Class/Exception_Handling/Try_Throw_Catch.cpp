#include<iostream>
using namespace std;

int main()
{
    float x=-1.5;

    cout<<"Before try \n";
    try{
        cout<<"Inside try \n";
        if(x<0)
        {
            throw x;
            cout<<"After throw";
        }
    }
    catch(int x)
    {
        cout<<"Exception caught. FLoat type \n";
    }
    cout<<"After Catch \n";
    return 0;
}