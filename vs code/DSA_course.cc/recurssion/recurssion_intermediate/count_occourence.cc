#include <iostream>
using namespace std;

int count_element(int arr[], int n, int x, int i){
    if(i==n){
        return 0;
    }
    int count = 0;
    int small_ans = count_element(arr,n,x,i+1);
    if(arr[i] == x){
        count++;
    }
    return (small_ans + count);
}
int main (){
    int arr[] = {1,1,1,2,3,5,1};
    int ans = count_element(arr,7,1,0);
    cout<<ans;
    return 0;
}