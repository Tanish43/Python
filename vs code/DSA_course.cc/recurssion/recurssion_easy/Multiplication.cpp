#include <iostream>
using namespace std;

int multiply(int m , int n){
    if(n== 0){
        return 0;
    }
    int smallans = multiply(m,n-1);
    int answer = smallans + m;
    return answer;  
}
int main(){
    int x =  multiply(8,9);
    cout <<x;

    return 0;
}