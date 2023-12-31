#include <iostream>  
using namespace std;  

int partition (int a[], int start, int end)  
{  
    int pivot = a[end];   
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  

        if (a[j] < pivot)  
        {  
            i++;   
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
  
 
void quick(int a[], int start, int end)
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);   
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
  
 
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<< " ";  
}  
int main()  
{  
    int n;
    cout << "Enter the number of elements you want to sort"<<endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements : ";
    for (int i = 0; i <= n-1 ; i++){
    cin >> a[i] ; 
    }

    cout<<"\n Before sorting array elements are - \n"; 
    printArr(a, n);  
    quick(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";    
    printArr(a, n);  
      
    return 0;  
}  