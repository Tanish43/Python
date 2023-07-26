#include <iostream>
using namespace std;

class shape
{
public:
    virtual int calc_area()=0;
    virtual int no_of_sides()=0;
};


class trapezoid : shape
{
private:
    int a,b,h;
public:
    int no_of_sides()
    { return 4; }

    void get_data()
    {
        cout<<"\nEnter the top parallel side : ";
        cin>>a;
        cout<<"\nEnter the bottom parallel side : ";
        cin>>b;
        cout<<"\nEnter the height : ";
        cin>>h;
    }

    int calc_area()
    {
        int area;
        area= (a+b)*h/2;
        return area;
    }
};

class triangle : shape
{
private:
    int b,h;
public:
    int no_of_sides()
    { return 3; }

    void get_data()
    {
        cout<<"\nEnter the base length : ";
        cin>>b;
        cout<<"\nEnter the height : ";
        cin>>h;
    }

    int calc_area()
    {
        int area;
        area= (b*h)/2;
        return area;
    }
};

class hexagon : shape
{
private:
    int a;
public:
    int no_of_sides()
    { return 6; }

    void get_data()
    {
        cout<<"\nEnter the side length : ";
        cin>>a;
    }

    int calc_area()
    {
        int area;
        area = int (2.6 * a * a);
        return area;
    }
};


int main()
{
    char type;
    type_entry:
    cout<<"Enter 't'-triangle, 'p'-trapezium, 'h'-hexagon : ";
    cin>>type;
    if(!(type=='t' || type=='p' || type=='h'))
    {
        cout<<"\n\tERROR : ENTER A VALID RESPONSE : \n"<<endl;
        goto type_entry;
    }
    int ar,sides;

    if(type=='t')
    {
        triangle tri;
        sides=tri.no_of_sides();
        cout<<"\nNumber of sides in your shape are : "<<sides<<endl;
        tri.get_data();
        ar=tri.calc_area();
        cout<<"\nArea of your triangle is : "<<ar<<endl;
    }

    else if(type=='p')
    {
        trapezoid trap;
        sides=trap.no_of_sides();
        cout<<"\nNumber of sides in your shape are : "<<sides<<endl;
        trap.get_data();
        ar=trap.calc_area();
        cout<<"\nArea of your trapezoid is : "<<ar<<endl;
    }

    else
    {
        hexagon hex;
        sides=hex.no_of_sides();
        cout<<"\nNumber of sides in your shape are : "<<sides<<endl;
        hex.get_data();
        ar=hex.calc_area();
        cout<<"\nArea of hexagon is : "<<ar<<endl;
    }
    return 0;
}
