#include <iostream>
using namespace std;

class negative{
    int a, b, c ;
    public:
    negative(){
        a = 0, b = 0, c = 0;
    }
    negative(int x, int y, int z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        
        cout <<"a = "<< a <<" b = "<< b <<" c = " << c << endl;

    }
    void operator -(){
        a=-a;
        b=-b;
        c=-c;
    }
};
int main (){
    negative n1(5,6,9);
    -n1;
    n1.display();
    return 0;
}