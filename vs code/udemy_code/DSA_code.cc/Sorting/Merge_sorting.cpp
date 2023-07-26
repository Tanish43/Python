#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
}
void merge_array(int x[],int y[],int arr[],int s,int e){
    int mid = (s+e)/2;
    int i=0, j= mid + 1 ,k=0;
    while(i<=mid && j<=e){
        if(x[i] < y[j]){
            arr[k] = x[i];
            i++;
            k++;
        }
        else{
        arr[k] = y[i];
            j++;
            k++;
        }
    }
    while(i<=mid){
        arr[k] = x[i];
        k++;
        i++;
       }
       while(j<=e){
        arr[k] = y[j];
        k++;
        j++;
       }
}
void merge_sort(int arr[],int s,int e){
    if (s >e){
        return;
    }
    int mid = (s+e)/2;
    int x[100]; 
    int y[100];
    for(int i =0; i<= mid;i++){
        x[i] = arr[i];
    }
    for(int i =mid+1; i<= e;i++){
        y[i] = arr[i];
    }
    merge_sort(x,s,mid);
    merge_sort(y,mid+1,e);
    merge_array(x,y,arr,s,e);

}

int main (){
    int arr[100], n;
    cout <<"Enter the number of elements you want to store ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int e = n-1, s = 0;
    printarray(arr,n);
    merge_sort(arr, s,e);
    printarray(arr,n);

    return 0;
}