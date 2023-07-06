#include <iostream>
using namespace std;

class matrix
{
    int a[3][3];

public:
    void get()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    matrix operator * (matrix b)
    {
        matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.a[i][j]=0;
                for (int k = 0; k < 3; k++)
                {
                    temp.a[i][j] = temp.a[i][j] + a[i][k] * b.a[k][j];
                }
            }
        }
         return temp;
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<a[i][j]<<"  ";
            } 
            cout<<endl;  
        }
    }
};
int main()
{
    matrix m1, m2, m3;
    m1.get();
    m2.get();
    m3 = m1 * m2;
    m3.display();
}