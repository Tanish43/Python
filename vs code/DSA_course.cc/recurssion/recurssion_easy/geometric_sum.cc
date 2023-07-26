#include <iostream>
#include <cmath>
using namespace std;

double geometric_sum(double n ,int k){
    if( k== 0){
        return 1;
    }
    double small_ans = geometric_sum(n,k-1);
    return (small_ans + pow(n,k))  ;
}
int main(){
    double x = geometric_sum(0.5,1);
    cout <<x;
    return 0;
}