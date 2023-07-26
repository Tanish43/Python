#include <iostream>
using namespace std;

int main (){
    int a, b;
    cout <<"Enter the values you want to swap : ";
    cin >> a >> b;
   /* a= a^b;
    b = a^b; // b = (a^b^b) = a so b will be cancel out b itself
    a= a^b; // a = (a^b^a) = b where a is cancel out by a. Hence, the value are swapped.*/
    swap(a,b);

    cout << "the values after swapping is : "<< a <<" " << b ;
    return 0; 

}