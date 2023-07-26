#include <iostream>
using namespace std;
int toh(int n){
    if(n==0){
        return 0;
    }
    return toh(n-1) + 1 + toh(n-1);
}
int main(){
    int steps = toh(5);
    cout<< steps;

    return 0;
}