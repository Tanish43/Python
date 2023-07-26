#include <iostream>
#include <algorithm>
using namespace std;

void print_array(int arr[], int n){
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }

int main(){
int n;
    cout<<"\n Enter the number of element you want to store"<<endl;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements in your array"<<endl;
    for (int i = 0; i<n ;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr + 3);//It sort from 1 to 3 index of the array and rest is unchanged
    print_array(arr, n);
        
   return 0;
}

