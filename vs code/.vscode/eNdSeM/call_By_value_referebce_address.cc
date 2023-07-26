#include <iostream>
using namespace std; //swapping two numbers 

void swap_by_val(int x, int y);
void swap_by_add(int *x, int *y);
void swap_by_ref(int &x, int &y);
int main(){ 
    int a,b;
    cout<<"\nEnter any two numbers: ";
    cin>>a>>b;
    swap_by_val(a,b);
    cout<<"\nIn swap by value(main)";
    cout<<"\na = "<<a<<" b = "<<b;

    swap_by_add(&a,&b);
    cout<<"\nIn swap by address(main)";
    cout<<"\na = "<<a<<" b = "<<b;

    swap_by_ref(a,b);
    cout<<"\nIn swap by reference(main)";
    cout<<"\na = "<<a<<" b = "<<b;

    return 0;
}

void swap_by_val(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"\nIn swap by value(function)";
    cout<<"\na = "<<x<<" b = "<<y;
    }

 void swap_by_add(int *x, int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout<<"\nIn swap by value(function)";
    cout<<"\na = "<<*x<<" b = "<<*y;
 }
 void swap_by_ref(int &x, int&y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"\nIn swap by value(function)";
    cout<<"\na = "<<x<<" b = "<<y;
 }
