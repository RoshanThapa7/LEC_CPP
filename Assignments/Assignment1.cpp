#include<iostream>

using namespace std;
class student{
    private:
    char name[100];
    int age,marks,roll;
    void submit()
    {
        cout<<"Submitted";
    }
    public:
    void get(void)
    {
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter age :";
        cin>>age;
        cout<<"Enter marks :";
        cin>>marks;
        cout<<"Enter roll no. :";
        cin>>roll;
    }
    void put(void)
    {
        cout<<endl<<endl<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Marks: "<<marks<<endl<<"RollNo.: "<<roll<<endl;
    }
};

    int main()
    {
        student s1,s2,s3,s4,s5;
        s1.get();
        s2.get();
        s3.get();
        s4.get();
        s5.get();
        cout<<"Student 1"<<endl;
        s1.put();
        cout<<"Student 2"<<endl;
        s2.put();
        cout<<"Student 3"<<endl;
        s3.put();
        cout<<"Student 4"<<endl;
        s4.put();
        cout<<"Student 5"<<endl;
        s5.put();
        return 0;
    }
        
    
