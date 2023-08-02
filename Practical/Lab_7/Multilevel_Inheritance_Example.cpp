#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    string name;
    int roll;

public:
    void getData()
    {
        cout << "enter name : " << endl;
        cin >> name;
        cout << "enter roll number : " << endl;
        cin >> roll;
    }
    void showData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll : "<<roll<<endl; 
    }
};
class test : public student
{
protected:
    int m1, m2, m3;

public:
    void enterMarks()
    {
        student::getData();
        cout << "enter marks in OOP : " << endl;
        cin >> m1;
        cout << "enter marks in TOC : " << endl;
        cin >> m2;
        cout << "enter marks in E&M : " << endl;
        cin >> m3;
    }
    void showMarks()
    {
        student::showData();
        cout<<"Marks in OOP : "<<m1<<endl;
        cout<<"Marks in TOC : "<<m2<<endl;;
        cout<<"Marks in E&M : "<<m3<<endl;;
    }
};
class result : public test
{
    float GPA,total,x,y,z;
public:
    result()
    {
        test::enterMarks();
        x=m1;
        y=m2;
        z=m3;
        total=x+y+z;
        GPA=(total/3)/25;

    }
    void printResult()
    {
        test::showMarks();
        cout<<"Total = "<<total<<" out of 300"<<endl;
        cout<<"GPA = "<<GPA<<endl;
    }
};

int main()
{
    result A;
    
    A.printResult();

    return 0;
}