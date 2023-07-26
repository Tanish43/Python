#include <iostream>
using namespace std;

inline int greater (int x, int y){ 
    return (x > y)? x : y;
}
int main(){
int num1, num2;
cout << "\n Enter two numbers: ";
cin >> num1 >> num2; 
int great = greater(num1 , num2);
cout<<"\n The greater number is: "<< great; 
}