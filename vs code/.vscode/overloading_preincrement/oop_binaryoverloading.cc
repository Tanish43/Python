#include <iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    complex (){
        real = 0;
        imaginary = 0;
    }
    complex (int x, int y){
        real = x;
        imaginary = y;
    }
    void display(){
        cout <<"complex no. = "<< real <<" + " <<imaginary<<"i" <<endl;
        
    }
    complex add(complex x){
        complex temp;
        temp.real = real + x.real;
        temp.imaginary = imaginary + x.imaginary;
        return temp;
    }
    complex operator + (complex x){
       complex temp;
        temp.real = real + x.real;
        temp.imaginary = imaginary + x.imaginary;
        return temp; 
    }
      complex operator - (complex x){
       complex temp;
        temp.real = real - x.real;
        temp.imaginary = imaginary - x.imaginary;
        return temp; 
    }

};
int main(){

    int r1,i1, r2 ,i2;
    cout <<"Enter the real part of the complex no. : ";
    cin >> r1;
     cout <<"\nEnter the imaginary part of the complex no. : ";
    cin >> i1;
    cout <<"Enter the real part of the  second complex no. : ";
    cin >> r2;
     cout <<"\nEnter the imaginary part of the second complex no. : ";
    cin >> i2;
    complex c1(r1,i1), c2(r2,i2), c3 ,c4;
    c3 = c1.add(c2); 
    c3 = c1.operator +(c2);
    c3 = c1 + c2; //operator overloading
    c4 = c1 - c2;

    c1.display();
    c2.display();
    c3.display();
    c4.display();

    return 0;
}
