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
      int operator == (complex x){
        if (real == x.real && imaginary == x.imaginary){
            return 1;
        }
        else{
            return 0;
        }
    }

};
int main(){

    complex c1(2,4), c2(2,4), c3;
    c3 = c1.add(c2); 
    c3 = c1.operator +(c2);
    c3 = c1 + c2; //operator overloading
    if (c1==c2){
        cout <<"both the obejects having same values" << endl;

    } 
    else{
        cout << "Objects are different" << endl;

    }

    c1.display();
    c2.display();
    c3.display();
}
