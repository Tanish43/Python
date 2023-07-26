#include <iostream>
using namespace std;

/* In Bubble sort consecutive elements are swap if the right element is smaller than
the left element starting from first index till last index.
and this is done till n times. and the given array is sorted.
Time complexity
 Best Case O(n)
 Average Case O(n2)
 Worst Case O(n2)
 
 Best Case Complexity - It occurs when there is no sorting required, i.e. the array is
 already sorted. The best-case time complexity of bubble sort is O(n).

Space complexity
 Space Complexity O(1)
 Stable	YES
*/
void bubble_sort(int arr[], int n){
    int flag = 0;
    for(int i = 0; i<n ; i++){
        for(int j=0;j<=n-2;j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){ // optimized bubble sort
            break;
        }
    }
}
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
    bubble_sort(arr,n);
    print_array(arr, n);
        
   return 0;
}