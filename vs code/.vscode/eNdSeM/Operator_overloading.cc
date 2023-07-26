#include <iostream>
using namespace std;

class time{
    int hour;
    int minute;

    public:
    time(){
        hour = 0;
        minute = 0;
    }
    time (int hr, int min){
        hour = hr;
        minute = min;
    }
    friend time operator +(time t1, time t2){
        time temp;
        temp.minute = (t2.minute + t1.minute) % 60;
        temp.hour = (t2.hour + t1.hour) + (t2.minute + t1.minute) / 60;
        return temp;
    }
    friend void show_data(time t);

};
void show_data(time t){
    cout<< t.hour<<"hr "<<t.minute<<"min "<<endl;
}
int main(){
    time t1(2,50), t2(3,40), t3;
    t3=  t1 + t2;
    show_data(t1);
    show_data(t2);
    show_data(t3);

    return 0;
}