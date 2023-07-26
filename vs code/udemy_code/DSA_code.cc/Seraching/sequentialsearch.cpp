#include <iostream>
using namespace std;

void print_array(int arr[], int n);
void sequential_search(int arr[], int key, int n);
    
int main(){
    int arr[100], n, key;
    cout <<"Enter the number of elements you want to store \n";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    print_array(arr,n);
    cout <<"\n Enter the element you want to search";
    cin >> key;
    sequential_search(arr, key, n);

    return 0;
}

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" "<<endl;
}
void sequential_search(int arr[], int key, int n){
    int flag,index;
    for(int i = 0; i < n; i++){
        if(arr[i] == key)
            flag = 1;
            index = i;
        break;
    }
    if (flag == 1){
        cout <<"The entered element "<< key <<"is found at index: "<< index <<endl;
    }
    else{
        cout << "Element is not found"<<endl;
    }
}
