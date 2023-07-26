#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

/*Remove duplicates function return vecor 
we take map of bool as values where the integer key which is repeated assigns true
and not include in vector if value true while performing loop*/
vector<int> remove_duplicates(int *arr, int n){
   vector<int> output;
   unordered_map<int,bool> mymap;
   for(int i = 0; i<n; i++){
      if(mymap.count(arr[i]) == 0){//if not present
         output.push_back(arr[i]);
         mymap[arr[i]] = true;

      }
   }
   return output;
}
int main(){
   int arr[] = {1,2,3,1,5,5,9,7,9,4};
   int n = sizeof(arr)/sizeof(arr[1]);
   vector<int> v = remove_duplicates(arr,n);
   for(int  i = 0; i<v.size(); i++){
      cout<<v.at(i)<<" ";
   } 
}