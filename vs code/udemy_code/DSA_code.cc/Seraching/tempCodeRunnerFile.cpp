#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}
void search(int arr[], int key, int n){
    int flag = 0, i, position;
    for( i =0; i<n; i++){
        if(key == arr[i]){
            position = i;
            flag = 1;
            break;
        }
    }
    if( flag == 1){
        cout <<"\n Entered element "<< key <<" is found at index "<< position;
        return;
    }
    else{
        cout<<"\n element not found";
        return;
    }
}

int main (){
    int arr[100], n, key;
    cout <<"Enter the number of elements you want to store ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printarray(arr,n);
    cout <<"\n Enter the element you want to search";
    cin >> key;
    search(arr, key, n);
    return 0;
}