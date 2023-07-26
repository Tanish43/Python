#include <iostream>
using namespace std;

/*Recurssion function means calling itself
->recurssion can be used for all the case in which problem can be solved at the finest level. 
->we need to asume that our function is working and only need to define only base case 
it has :-
base case to terminate the function
parent case to call base case */

int count_zeros(int n){
    if(n == 0){ // base case
        return 0;
    }
    int count = count_zeros(n/10);//parent case
    int last_digit = n % 10;
    if(last_digit == 0){
        count++;
    }
    return  count;
}
int main(){
    int x = count_zeros(1000005012);
    cout <<x;
    return 0;
}