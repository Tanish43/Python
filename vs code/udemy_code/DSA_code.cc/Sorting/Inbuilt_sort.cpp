#include <iostream>
#include <algorithm> //#include <bits/stdc++.h> (it is the master header file)

using namespace std;

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

int main (){
    int arr[100], n;
    cout <<"Enter the number of elements you want to store ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printarray(arr,n);
    sort(arr, arr + n);
    printarray(arr,n);

    return 0;
}