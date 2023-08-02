#include<iostream>
#include<cmath>
using namespace std;

class number
{
    double num;
    public:
        class NEG{};
        void readnum();
        double sqroot();
};
void number::readnum()
{
    cout<<"Enter number";
    cin>>num;
}
double number::sqroot()
{
    if(num<0)
    {
        throw NEG();
    }
    else
    return (sqrt(num));
}
int main()
{
    number n1;
    double res;
    n1.readnum();
    try
    
        {
            cout<<"\n Trying to find sqroot...:"<<endl;
            res=n1.sqroot();
            cout<<"sqroot is : "<<res<<endl;
            cout<<"sucess...Exceptional handling is not raised "<<endl;
        }
    
  catch(number::NEG)
  {
    cout<<"\nSqroot of negative number is not possible";
  }
  return 0;
    
}
