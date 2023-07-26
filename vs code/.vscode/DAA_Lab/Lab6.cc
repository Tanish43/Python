#include <iostream>
using namespace std;

bool isMajority(int arr[],int n,int x){
    if (n == 1) {
        return (arr[0] == x);
    }

    int mid = n / 2;
    int* left_half = arr;
    int* right_half = arr + mid;

    bool left_majority = isMajority(left_half, mid, x);
    bool right_majority = isMajority(right_half, n - mid, x);

    if (left_majority) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                count++;
            }
        }
        return count > n / 2;
    }
    else if (right_majority) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                count++;
            }
        }
        return count > n / 2;
    }
    else {
        return false;
    }
}


int main(){
    int n,x;
    cout<<"\nEnter the size of your array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nthe elements are: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the element you want to search";
    cin>>x;
    if(isMajority(arr,n,x)){
        cout<<x<<" is a majority element in the array";
    }
    else{
        cout<<x<<" is not a majority element";
    }
    return 0;
}
//x x y y y y y b b z z z z a a