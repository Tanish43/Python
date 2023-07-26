#include <iostream>
using namespace std;

/* Merge sort works on the divide and conquer technique
   working -> First the array is divided into two subarrays and store their 
   data in two different arrays  and is again divided recurssively and until 
   the single or no element is left(For which the base case is written) than 
   the elemenet are sort and merge.

   mergeArrays -> elemnts of the array x and y are stored in the array a and 
   the i index pointing x elements, j inedx pointing y elements and k index pointing
   a elements.
   For elements which are left again the while loop is run to store the remaining 
   elements in array a

   Time complexity:-
   Best Case	O(n*logn)
   Average Case	O(n*logn)
   Worst Case	O(n*logn)

   Space complexity:-
   Space Complexity	O(n)
   Stable	YES
*/
void mergeArrays(int x[],int y[],int a[],int s,int e){
       int mid = (s+e)/2;
       int i=s;
       int j = mid+1;
       int k = s;
       while(i<=mid && j<=e){
           if(x[i] < y[j]){
            a[k++] = x[i++];
           }else{
             a[k++] = y[j++];
           }
       }
       while(i<=mid){
        a[k++] = x[i++];
      }
       while(j<=e){
        a[k++] = y[j++];
       }
}

void mergeSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    int x[100],y[100];
    for(int i=s;i<=mid;i++){ 
        x[i] = a[i];
    }
    for(int i=mid+1;i<=e;i++){
        y[i] = a[i];
    }
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);
    mergeArrays(x,y,a,s,e);
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
    mergeSort(arr,0,n-1);
    print_array(arr, n);
        
   return 0;
}