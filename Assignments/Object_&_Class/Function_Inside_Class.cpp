/*definside.cpp
definition inside the class*/

#include<iostream>
using namespace std; 

class student
{     
    private:
        int roll;
        char name[20]; char phone [10]; 
        
    public:
        void getdata()
        { 
            cout<<"\nEnter Roll No: ";
            cin>>roll;
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Phone Number: ";
            cin>>phone;
        }
        void showdata ()
        {
            cout<<"Name: "<<name<<endl; 
            cout<<"Roll No: "<<roll<<endl; 
            cout<<"Phone Number: "<<phone<<endl;
        }

}; // end of class

int main()
{ 
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"\nfirst student"<<endl; 
    s1.showdata(); cout<<"second student"<<endl;
    s2.showdata();
    return 0;
}