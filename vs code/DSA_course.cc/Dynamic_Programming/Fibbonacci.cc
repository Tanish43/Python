#include <iostream>
using namespace std;

int fibbonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
        return fibbonacci(n-1) + fibbonacci(n-2);
    }
}
int fibbonacci2(int n, int* arr){
    if(n == 0 || n == 1){
        return n;
    }
    if(arr[n] != 0){
        return arr[n];
    }
    int output = fibbonacci2(n-1,arr) + fibbonacci2(n-2,arr);
    arr[n] = output;
    return output;
}
int fibbonacci3(int n){
    int *arr = new int[n+1];
   arr[0] = 0;
   arr[1] = 1;

   for(int i=2;i<=n;i++){
    arr[i] = arr[i-1] + arr[i-2];
   }

   int output = arr[n];
   delete []arr;
   return output;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = 0;     /// Initialise with any invalid value like -2,-10..
    }
    cout<<fibbonacci3(n)<<endl;
    cout<<fibbonacci2(n,arr)<<endl;
    cout<<fibbonacci(n)<<endl;
    return 0;
}