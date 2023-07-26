#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
}
void selection_sort(int arr[],int n){
    /*for(int i=0; i< n-1;i++){
        int smallest =INT16_MAX;

        for(int j = i+1; j<= n-1;j++){
            if(arr[j] < smallest){
                smallest = arr[j];

            }
        }
        if(arr[i] > smallest){
            swap(arr[i],smallest);
        }
    }*/
    for (int i =0; i< n-1;i++){
        int smallest = i;
        for(int j = i+1; j<=n-1;j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
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
    selection_sort(arr, n);
    printarray(arr,n);

    return 0;
}