#include <iostream>
using namespace std;

int main(){
    int x = 10;
    char ch = 'A';
    void *gp;
    gp = &x;
    cout<<"The genric pointer points to the integer value = "<< *(int*)gp;
    gp = &ch; 
    cout<<"\nThe genric pointer points to the character value = "<< *(char*)gp;
    return 0;
}