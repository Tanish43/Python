#include <iostream>
using namespace std;


double power(double m = 4,int n=2){
    double ans = 1;
    for(int i=0; i< n; i++){
        ans = m *ans;
    }
    return ans;
}

int main(){
    double m;
    int n;
    double pow1 = power();
    double pow2 = power(5);
    double pow3 = power(5.5,3);
    cout << pow1<<" "<<pow2<<" "<<pow3;
}