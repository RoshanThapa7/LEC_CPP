#include<iostream>
using namespace std;

class parent
{
    protected:
    int id_protected;
}; 
class child : public parent
{
    public:
    void setId(int id)
    {
        id_protected=id;
    }

    void display() {
        cout<<id_protected;
    }
};

int main()
{
    child p1;
    p1.setId(4);
    p1.display();
}