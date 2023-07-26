#include <iostream>
using namespace std;

class TIME{
    int hour, minute;
    public:
    TIME(){
        hour = 0;
        minute = 0;
    }
    TIME( int h, int m){
        hour = h;
        minute = m;
    }
    void showdata(){
        cout<<"\n Time is - "<< hour + minute / 60 <<":"<<minute % 60;
    }
    friend TIME operator +(TIME t1,TIME t2){
        TIME temp;
        temp.hour = t1.hour + t2.hour + (t1.minute  +t2.minute) / 60;
        temp.minute = (t1.minute  + t2.minute) % 60;
        return temp;
    }


};
int main (){
    int hr1, min1, hr2, min2;
    TIME t3;
    cout<<"\n Enter the hours and minute - ";
    cin >> hr1>> min1;
    TIME t1(hr1,min1);
    t1.showdata();
    cout<<"\n Enter the hours and minute again - ";
    cin >> hr2>>min2;
    TIME t2(hr2 ,min2);
    t2.showdata();
    t3 = t1 + t2;
    cout <<"\n After adding time - ";
    t3.showdata();
    return 0;
}