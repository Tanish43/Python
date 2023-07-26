#include <iostream>
using namespace std;
int fact(int);

int main (){
    int num;
    cout <<"Enter the number whose factorial you want : ";
    cin >> num;
    cout <<"Factorial of "<< num <<" is - "<<fact(num);
    return 0;
}
int fact(int x){
    if (x == 1)
      return 1;
   return (x = x * fact(x-1)); 
}