#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if(n == 0 || k == 0 ){
            return;
        }
        vector<int> temp;
        for(int i = 0 ; i< n-k; i++){
            temp[i] = nums[i];
        }
        for(int i =0 ; i< k ;i++){
            nums[i] = nums[n-k + i];
        }
        for(int i = 0; i<n-k; i++ ){
            nums[k + i] = temp[i];
        }
}
void print_vector(vector<int> & arr){
    cout<<endl;
   for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    } 
}

int main(){
    vector<int> nums;
    int n,ele;
    cout<<"\nEnter the size of your array";
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>ele;
        nums.push_back(ele);
    }
    cout<<"blaa";
    print_vector(nums);
    int k;
    cout<<"\nEnter the value of k by which you want to rotate";
    cin>>k;
    rotate(nums,k);
    print_vector(nums);

    return 0;
}