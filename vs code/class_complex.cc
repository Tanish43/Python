#include <iostream>
using namespace std;

class complex{
    
    private:
    int real , imaginary;
    public:
    void get_data(int r, int i){
        real = r;
        imaginary = i;
    }
    void display_data(){
        cout << "The complex no. is : ";
        cout << real <<" + " << imaginary <<"i"<<endl;
    }
    friend complex operator +(complex c1, complex c2){
        complex c3;
        c3.imaginary = c1.imaginary + c2.imaginary;
        c3.real = c1.real + c2.real;
        return c3;
        
        
    }
};
int main(){
    complex C1, C2, C3;
    C1.get_data(2,5);
    C2.get_data(5,4);
    C3 = C1 + C2;
    C1.display_data();
    C2.display_data();
    C3.display_data();
    return 0;



}