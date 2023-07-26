#include<iostream>
#include<queue>
using namespace std;

void K_SortedArray(int* input, int n, int k){
    priority_queue<int> pq;
    for(int i = 0 ; i< k ; i++){
        pq.push(input[i]);
    }
    int s = 0;
    for(int i = k; i< n; i++){
        input[s] = pq.top();
        pq.pop();
        pq.push(input[i]);
        s++;
    }
    while(!pq.empty()){
        input[s] = pq.top();
        pq.pop();
        s++;
    }
}

int main(){
    int arr[] = {10,12,6,7,9};
    int k = 3;
    K_SortedArray(arr,5,k);
    for(int i = 0; i< 5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}