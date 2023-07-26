#include <iostream>
using namespace std;

class TIME
{
private:
    int hours;
    int mins;
public:
    void gettime()
    {
        cout<<"\nEnter the hours : ";
        cin>>hours;
        cout<<"Enter the minutes : ";
        cin>>mins;
    }

    void puttime()
    {  cout<<"\nTime is : "<<hours<<" hrs "<<mins<<" mins"<<endl;   }

    friend TIME addtime(TIME t1,TIME t2);
};

TIME addtime(TIME t1,TIME t2)
{
    TIME t3;
    t3.mins = (t1.mins + t2.mins)%60;
    t3.hours= t1.hours + t2.hours + (t1.mins + t2.mins)/60;
    return t3;
}

int main ()
{
    TIME a,b,c;
    cout<<"\tTime 1 : "<<endl;
    a.gettime();
    cout<<"\n\tTime 2 : "<<endl;
    b.gettime();
    cout<<"\n\tTime 1: "<<endl;
    a.puttime();
    cout<<"\n\tTime 2 : "<<endl;
    b.puttime();

    c=addtime(a,b);
    cout<<"\nSum of Time 1 and Time 2 is : ";
    c.puttime();
    return 0;
}