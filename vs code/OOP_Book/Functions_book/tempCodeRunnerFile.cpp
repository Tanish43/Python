#include <iostream>
using namespace std;

int &greater(int &x, int &y){
    if(x > y)
        return x;
    else 
        return y;
}
int main(){
    int num1, num2, large;
    cout <<"\n Enter two numbers : ";
    cin >> num1 >> num2;
    cout <<"Entered numbers are : "<<num1 <<" "<< num2;
    large = greater(num1 , num2);
    cout <<"\n larger number is : "<<large;
    greater(num1 , num2) = -1; // Using function at left side of assignment operator usinf reference
    cout <<"two numbers are : "<<num1 <<" "<< num2;
    return 0;
    
}