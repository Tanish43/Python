#include <iostream>
using namespace std;

int Max_sum(int arr[], int n){
    int tSum = 0, maxSum=0;
    for(int i=0; i<n; i++){
        tSum+=arr[i];
        maxSum+=i*arr[i];
    }
    int curSum=maxSum;
    for(int i=0; i<n-1; i++){
        curSum = curSum - tSum + arr[i] + (arr[i]*(n-1));
        if(curSum > maxSum)
            maxSum = curSum;
    }
    return maxSum;
}
int main(){
    int n;
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
    cout<<"\nMaximum sum of the matrix is: "<<Max_sum(arr,n);
    return 0;
}