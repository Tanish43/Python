#include <iostream>
using namespace std;
int sum_arrays(int arr[],int n){
    if(n==0){
        return 0;
    }
    int small_ans = sum_arrays(arr + 1,n-1);
    return (arr[0] + small_ans);
}
int main(){
    
    int arr[] = {1,2,3,4,4,7,6};
    int n = sum_arrays(arr, sizeof(arr)/sizeof(arr[0]));
    cout<<n;

    return 0;
}