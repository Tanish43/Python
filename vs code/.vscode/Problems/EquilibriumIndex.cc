#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int n = arr.size();
    if(n == 1 || n == 2){
        return -1;
    }
    int a = 0;
    int b = arr[1];
    for(int i = 2; i<n; i++){
        b += arr[i];
    }
    for(int i = 0; i<n-1 ; i++){
        if(a == b){
            return i;
        }
        a += arr[i];
        b -= arr[i+1];
    }
    return -1;
}