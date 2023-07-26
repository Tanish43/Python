#include <iostream>
using namespace std;

int fibbonacci( int n, int sum){
    if(n == 0){
        return 0;
    }
    else if( n== 1){
        return 1;
    }
        int last_no = (fibbonacci(n-1,sum) + fibbonacci(n-2,sum));
        sum += last_no;
        return sum;
    }

int main(){
    int sum = 0 ;
    cout<< fibbonacci(3,sum);
}