#include <iostream>
using namespace std;

/* Quick sort also works on the concept of divide and conquer technique. In this 
   any element in the array is taken as the pivot element which is then place at 
   its correct position using partition function and place smaller element on it 
   left and larger element on it right. Than the recurssion on the sub arrays
   is applied using quick sort function. at the base level when there is one or no 
   element left we can say that our given array is sorted.   
   
   Partition function -> It help to find the correct position of pivot element.
   working:- We take to variable i and j pointing the indecies. we compare the 
   a[j] element with the pivot element if it smaller then we swap element at i and j
   index and move i forward and j is increase at every traverse.
   on reching the index previous to piviot we can stop our loop. and i will give the 
   position of pivot element. at last a[i] and a[e](pivot) are swapped. 
   
   Time complexity:-
    Best Case	O(n*logn)
    Average Case	O(n*logn)
    Worst Case	O(n2)
    
    Best Case Complexity - In Quicksort, the best-case occurs when the pivot element 
    is the middle element or near to the middle element. The best-case time complexity 
    of quicksort is O(n*logn).

    Worst Case Complexity - In quick sort, worst case occurs when the pivot element is 
    either greatest or smallest element. Suppose, if the pivot element is always the 
    last element of the array, the worst case would occur when the given array is 
    sorted already in ascending or descending order. The worst-case time complexity 
    of quicksort is O(n2).

*/
void print_array(int arr[], int n){
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int partition(int a[], int s, int e){
    int i = s;
    int pivot = a[e];
    for(int j = s; j<= e-1; j++){
        if(a[j] < pivot){
            swap(a[j],a[i]);
            i++;
        }

    }
    swap(a[i],a[e]);
    return i;
}
void quick_sort(int a[], int s, int e){
    if(s >= e){
        return;
    } 
    int p = partition(a,s,e);
    quick_sort(a,s,p-1);
    quick_sort(a,p+1,e);
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
    quick_sort(arr,0,n-1);
    print_array(arr, n);
        
   return 0;
}