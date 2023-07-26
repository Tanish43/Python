#include <iostream>
using namespace std;

bool array_sorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    bool small = array_sorted(arr + 1, n-1);
    return small;
} 
int main(){
    int arr[] = {1,2,3,4,4,7,6};
    if(array_sorted( arr, sizeof(arr)/sizeof(arr[0]))){
        cout<<"\n Array is sorted";
    }
    else 
        cout<<"\n Array is not sorted";
    return 0;
}