#include <iostream>
using namespace std;

void swap_call_by_val(int , int);
void swap_call_by_add(int *, int *);
void swap_call_by_ref(int &, int &);

main (){
    int a = 1, b = 2, c = 3, d = 4;
    cout <<"\n In main function, a = " << a <<" and b " << b;
    swap_call_by_val(a ,b);
    cout <<"\n In main function, a = " << a <<" and b " << b;
    swap_call_by_add(&c, &d);
    cout <<"\n In main function , c = "<< c <<" and d "<<d;
    swap_call_by_ref(c,d);
    cout <<"\n In main function , c = "<< c <<" and d "<<d;
    
    return 0;
}
void swap_call_by_val(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout <<"\n In function using call by value - a : "<< a << " b "<< b ;
}
void swap_call_by_add(int *c, int *d){
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    cout << "\n In function using call by address value - c : "<< *c << " d " << *d ; 
}
void swap_call_by_ref(int &c, int &d){
    int temp;
    temp = c;
    c = d;
    d = temp;
    cout <<"\n In function using call by reference value - c: "<< c << " d "<< d;
}