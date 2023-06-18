#include <iostream>
using namespace std;

class Sample
{
    friend float mean(Sample s);//friend le access garaidincha private ko pani
    float num1,num2;
    public:
    void getData()
    {
        float a, b;
        cin >> a;
        cin >> b;
        num1=a;
        num2=b;
    }
};
float mean(Sample s)
{
    float m;
    m=(s.num1+s.num2)/2;
    return m;
}
int main()
{
    Sample s;
    s.getData();
    cout<<"Mean : "<<mean(s);
}