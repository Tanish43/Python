#include <iostream>
using namespace std;
bool check_element(int arr[], int n, int k){
    if(n==0){
        return 0;
    }
    if( arr[0]==k){
        return true;
    }
    bool small_ans = check_element(arr +1,  n-1,k);
    return small_ans;
}
int main(){
    int arr[] = {1,2,3,4,4,7,6};
    int k;
    cout <<"\n Enter the value of the element you want to find ";
    cin>>k;
    bool key = check_element( arr, sizeof(arr)/sizeof(arr[0]),k);
    if(key){
        cout<<"\n element found!!!";
    }
    else {
        cout<<"\n Element not found";
    }
    return 0;
}