# include <iostream>
using namespace std;

int main (){
    int a = 5;
    int *b = &a;
    *b = 7;
    cout << " a " << a << " b " << b << " &a " << &a <<" * b " << *b;

    return 0;
}