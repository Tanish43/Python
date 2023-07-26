#include <iostream>
using namespace std;

void averageOf_Greatest(int arr[], int n){
    int  l1, l2;
    double avg;
    int max = n;
    l1 = arr[0];
    l2 = -1;
    for(int i = 1; i<max; i++){
        if(arr[i] > l1){
            l2 = l1;
            l1 = arr[i];
        }
        else if(arr[i] < l1 && arr[i] > l2){
            l2 = arr[i];
        }
        else if(arr[i] == l1){
            l2 = l1;
        }
    }
    avg = (l1 + l2)/2;
    cout<< "\nlargest element is "<<l1<<" Second largest is "<<l2;
    cout<<"\nAverage is: "<<avg;
}
int main(){
    int k;
    cout<<"\nEnter the size of your array\n";
    cin>>k;
    int a[k];
    cout<<"\n Enter elements\n";
    for(int i = 0; i<k;i++){
        cin>>a[i];
    }
    cout<<"[ ";
    for(int i = 0; i<k;i++){
        cout<<a[i]<<" ";
    }
    cout<<"] "<<endl;
    averageOf_Greatest(a, k);
    return 0;
}