#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}
int binary_search(int arr[], int beg, int end, int key){
    int mid;
    if(end >= beg){
        mid = (end + beg)/2;
        if( key == mid){
            return mid;
        }
        else if(key < mid){
            end = mid -1;
            binary_search(arr,beg,end,key);
        }
        else if
        (key >= mid){
            beg = mid+1;
            binary_search(arr,beg,end,key);
        }
        
    }
    
        return -1;
}
int main(){
    int arr[100], n, key, pos;
    cout <<"Enter the number of elements you want to store ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printarray(arr,n);
    cout <<"\n Enter the element you want to search";
    cin >> key;
    int beg = 0, end = n-1;
    pos = binary_search(arr, beg = 0, end = n -1, key);
    if(pos != -1){
        cout<<"\n Searched element "<<key<<" is found at postion "<<pos;
    } 
    else{
        cout<<"\n Searched element is not found ";
    }
}