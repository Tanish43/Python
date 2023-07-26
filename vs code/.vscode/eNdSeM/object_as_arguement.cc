#include <iostream>
using namespace std;

class complex{
    int real;
    int imaginary;
    public:
    complex(){
        real = 0;
        imaginary = 0;
    }
    complex(int r, int i){
        real = r;
        imaginary = i;
    }
    void show_data(){
        cout<<real<<" + "<<imaginary<<"i "<<endl;
    }
    complex add_complex(complex c1, complex c2){
        complex c3;
        c3.imaginary = c1.imaginary + c2.imaginary;
        c3.real = c2.real + c1.real;
        return c3;
    }
    friend void multiply(complex c1, complex c2);
    friend class B;
};
void multiply(complex c1, complex c2){
    cout<<c2.real * c1.real<<" + " <<c1.imaginary * c2.imaginary<<"i ";
}

int main (){
    complex c1(1,2), c2(3,4);
    complex c3;
    c3 = c3.add_complex(c1,c2);
    c1.show_data();
    c2.show_data();
    c3.show_data();
    multiply(c1,c2);
    return 0 ;
}