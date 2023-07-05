#include<iostream>
using namespace std;

class complex
{
    private:
        int const real =5;
        int img;
    public:
        void getImg(int x)
        {
            img=x;
        }
        void getReal(int y)
        {
            real=y;
        }
};
int main()
{
    complex c1;
    c1.getImg(12);
    c1.getReal(10);
    return 0;
}