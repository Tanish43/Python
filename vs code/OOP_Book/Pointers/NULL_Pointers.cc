#include <iostream>
using namespace std;

int main(){
    int *ptr;
    ptr = NULL;
    ptr = 0 //same meaning as above line.
    cout<<"\nHello world";
    cout<<*ptr; // it will show runtime error as we are trying to dereference a null pointer
    cout<<"\n!";

    return 0;
}