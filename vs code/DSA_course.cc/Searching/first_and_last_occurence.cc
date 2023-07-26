#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*This is the code to find the first and the last occurence in the sorted array 
using binary search*/

class solution{
    public:
    int getFirst(vector<int> &num, int target){
        int s = 0;
        int e = num.capacity() - 1;
        int ans;
        while(s <= e){
        int mid = s + (e - s)/2;
        if(num.at(mid) == target){
            ans = mid;
            e = mid -1;// to get first occurence if present
        
        }
        else if( num.at(mid) > target){
            e = mid - 1;
        }
        else{
            s = mid +1;
        }
        }
        return ans;
    }
    
    int getLast(vector<int> &num, int target){
        int s = 0;
        int e = num.capacity() - 1;
        int ans;
        while(s <= e){
        int mid = s + (e - s)/2;
        if(num.at(mid) == target){
            ans = mid;
            s = mid + 1;// to get last occurence if present
        
        }
        else if( num.at(mid) > target){
            e = mid - 1;
        }
        else{
            s = mid +1;
        }
        }
        return ans;
    }
    
    vector<int> search_range(vector<int> &num, int target){
        vector<int> v(2,-1);
        int first = getFirst(num,target);
        if(first == -1){
            return v;
        }
        else{
            int last = getLast(num,target);
            v[0] = first;
            v[1] = last;
            return v;
        }
    }

    vector<int> getInput(){
    vector<int> v;
    int k;
    cout<<"\nenter the data in your array and -1 to stop entering\n";
    cin >> k;
    while(k != -1){
        v.push_back(k);
        cin >> k;
    }
    sort(v.begin(), v.end());
    return v;
    }

    void print(vector<int> v){
        
        cout<<"\n[ ";
        for(int  i =0; i< v.size(); i++){
            cout<<v.at(i)<<"  ";
        }
        cout<<"]";
    }
};

int main(){
    solution s;
    vector<int> n1 = s.getInput();
    vector<int> n2 = s.search_range(n1,5);
    s.print(n1);
    s.print(n2);

    return 0;
}