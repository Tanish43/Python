#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int BinarySearch(vector<int>& v, int n , int key){
    int s = 1, e = n-1;
    while(s<=e){
        int mid = s + (e - s)/2;
    if(v[mid] == key){
        return mid;
    }
    else if (v[mid] < key ){
        s = mid +1;
    }
    else{
        e = mid - 1;
    }
    }
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>> v.at(i);
    }

   cout<<"enter key"<<endl;
   int key;
   cin>>key;

   sort(v.begin(),v.end());

   int pos = BinarySearch(v,n,key);
   if(pos == -1){
    cout<<"key not found"<<endl;
   }else{
       cout<<"key found at index "<<pos<<endl;
   }

   return 0;
}