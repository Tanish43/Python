#include <iostream>
using namespace std;

class number{
    int a ;
    public:
    number(){
        a = 0 ;
    }
    number(int x){
        a = x;
        
    }
    void display(){
        
        cout <<"a = "<< a << endl;

    }
    void operator ++ (){
        a=++a;
        
    }
    void operator -- (){
        a=--a;
        
    }
};
int main (){
    int  num;
    cout <<"Enter the number on which you want to perform unary operations : ";
    cin >> num ;
    number n1(num);
    number n2(num);
    --n2;
    ++n1;
    n1.display();
    n2.display();
    return 0;
}