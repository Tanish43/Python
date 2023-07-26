#include <iostream>
using namespace std;

class base{
    protected:
    int roll_no;
    public:
    virtual void display()
    {
        cout<<"\nRoll No. = "<<roll_no<<endl;
    }
};
class Derived : public Base {
    
    protected:
    string name;
    public:
    Derived()
    {
    }
    Derived(int x,string z)
    {
        roll_no=x;
        name=z;
    }
    void display()
    {
        Base::display();
        cout<<"Name = "<<name<<endl<<endl;
    }
};
int main()
{
    Base *ptr;
    Derived d(163,"Vishvesh");
    ptr=&d;
    ptr->display();
return 0 ;
}
