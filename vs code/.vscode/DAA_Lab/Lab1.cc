#include <iostream>
#include <algorithm>
using namespace std;

void findpair(int arr[], int len, int sum);
int main(){
    int arr [10],k;
    cout<<"\nEnter the number of element in your array of size 10";
    for(int i = 0; i<10;i++){
        cin>>k;
        arr[i] = k;
    }
    int sum;
    int max= sizeof(arr)/sizeof(arr[0]);
    std :: sort(arr, arr+max);
    for(int i = 0; i<max ; i++){
        sum= arr[i];
    findpair(arr, 10, sum);
    }
}
void findpair(int arr[], int len, int sum)
{
    int i = 0;
    int j = len -1;
    while( i < j){
        while((arr[i] + arr[j]) <= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum)
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            i++;
        }
        j--;
        while((arr[i] + arr[j]) >= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum)
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            j--;
        }
    }
}
  