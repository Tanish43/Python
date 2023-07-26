#include <iostream>
using namespace std;

class demo{
    private: static int count ;
    public: void get_data(){
        cout << "count  = " << count++ << endl;
    }
};
int demo::count = 10;
int main (){
    demo d1, d2 ,d3 ;
    d1.get_data();
    d2.get_data();
    d3.get_data();

   return 0;
}