#include <iostream>
using namespace std;

/* Selection sort works by selecting an element usually the starting index
   and find the smallest element in the right sub array. If the smallest array 
   is smaller than the selected element than swap otherwise don't swap and move the
   index from left to right until reach the last index.

   Time Complexity
    Best Case
    O(n2)
    Average Case
    O(n2)
    Worst Case
    O(n2)
    Best Case Complexity - It occurs when there is no sorting required, i.e. the array
    is already sorted. The best-case time complexity of selection sort is O(n2).
    
   Space Complexity
    O(1)
    Stable(it means if there are two same elements in the array than there position will
            not change with respect to each other )
    YES
*/

    void selection_sort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int smallest = i;
        for(int j = i+1;j<=n-1;j++){

            if(a[j]<a[smallest]){
                smallest = j;
            }
        }

        swap(a[i],a[smallest]);
     }
    }
    void print_array(int arr[], int n){
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
    int get_data(int arr[]){
        int n;
        cout<<"\n Enter the number of element you want to store"<<endl;
        cin>>n;
        arr[n];
        cout<<"\nEnter the elements in your array"<<endl;
        for (int i = 0; i<n ;i++){
            cin>>arr[i];
        }
        return n;
    }

int main(){
    int arr[];
    int n = get_data(arr);
    selection_sort(arr,n);
    print_array(arr, n);
        
   return 0;
}