#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
}
void bubble_sort(int arr[],int n){
    int flag = 0;
    for(int count = 0; count <n-1 ;count++){
        
        for (int i =0; i<n-1; i++){
            if(arr[i] >arr[i+1]){
            swap(arr[i],arr[i+1]);
            flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
        
    }
    if(flag == 0){
        cout<<"no swapping take place"<<endl; //optimized bubble sort
    }
}

int main (){
    int arr[100], n;
    cout <<"Enter the number of elements you want to store ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printarray(arr,n);
    bubble_sort(arr, n);
    printarray(arr,n);

    return 0;
}