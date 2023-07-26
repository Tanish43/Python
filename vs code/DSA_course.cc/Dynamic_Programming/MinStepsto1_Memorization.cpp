#include <iostream>
using namespace std;

//Time complextiy of the finction is O(n)
//memorization method is top down approach.
//memorization = recurssive + store

int helper(int n, int *ans){
    if(n <= 1){ //base case
        return 0;
    }
    if(ans[n] != -1){ //array of memorization to check value is present or not
        return ans[n];
    }

    int x = helper(n-1,ans); // decrement by 1
    int y,z;
    y=z= INT16_MAX;
    if(n%2 == 0){
        y = helper(n/2,ans);
    }
    if(n%3 == 0){
        z = helper(n/3,ans);
    }
    int a = min(x,min(y,z)) + 1;
    ans[n] = a;
    return a; 
}
int minSteps(int n){
    int *ans = new int[n+1];
    for(int i = 0; i<=n; i++){
        ans[i] = -1;
    }
    int a = helper(n,ans);
    return a;
       
}
int main (){
    int n;
    cin>>n;
    cout<<minSteps(n)<<endl;
    return 0;
}