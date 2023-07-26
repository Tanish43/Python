//To find the GCD of two numbers.
#include <iostream>
using namespace std;

int  gcd(int , int);
int main(){
    int a , b, result;
    cout <<"\n Enter the two numbers : ";
    cin >> a >> b;
    result = gcd(a ,b);
    cout << "\n gcd of two numbers is : "<< result;
    return 0;
}
int gcd(int x, int y){
    int rem;
    rem = x % y;
    if (rem == 0)
        return y;
    else 
        return (gcd(y,rem)); 

}