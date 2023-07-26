#include <iostream>
using namespace std;

//Time complexity of the function is O(2^n)..
int minSteps(int n){
    if(n <= 1){ //base case
        return 0;
    }
    int x = minSteps(n-1); // decrement by 1
    int y,z;
    y=z= INT16_MAX;
    if(n%2 == 0){
        y = minSteps(n/2);
    }
    if(n%3 == 0){
        z = minSteps(n/3);
    }
    int ans = min(x,min(y,z)) + 1;
    return ans;    
}
int main (){
    int n;
    cin>>n;
    cout<<minSteps(n)<<endl;
    return 0;
}