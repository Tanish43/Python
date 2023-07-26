class PriorityQueue{
    vector<int> pq;
    public:
    int getsize(){
        return pq.size();
    }
    bool isEmpty(){
        return pq.size() == 0;
    }
    int getMin(){
        if(isEmpty()){
            return -1;
        }
        else{
            return pq[0];
        }
    }
    void insert(int ele){
        pq.push_back(ele);
        int ci = pq.size() -1;
        int pi = (ci - 1)/2;
        while(ci > 0){
            if(pq[ci] > pq[pi]){
                swap(pq[ci] , pq[pi]);
                ci = pi;
            }
            else{
                break;
            }
        }
    }
    int removeMin(){
        if(isEmpty()){
            return -1;
        }
        int a = pq[0];
        swap(pq[0],pq[pq.size() - 1]);
        pq.pop_back();

        int pi = 0;
        while(true){
            int mini = pi;
            int lci = pi*2 + 1;
            int rci = pi*2 + 2;
            if(lci < pq.size() && pq[lci] > pq[mini]){ // update mini index if left child is small than parent
                mini = lci;
            }
            if(rci < pq.size() && pq[rci] > pq[mini]){ // update mini index if right child is small than parent
                mini = lci;
                mini = rci;
            } 
            if(mini == pi){ // it means there is no updation in mini value..so loop will be break
                break;
            }
            swap(pq[pi], pq[mini]); // swap mini(minimum)index with parent index

        }
        return a;
    }
    

};

class Solution {
public:

    int findKthLargest(vector<int>& nums, int k) {
        int size = nums.size();
        if(size < 0){
            return -1;
        }
        else if(k > size){
            return -1;
        }
        PriorityQueue pq;
        for (int i = 0; i < size; i++) {
            pq.insert(nums[i]);
        }
        for (int i = 0; i < k -1 ; i++) {
            int a = pq.removeMin();
        }
    int ans = pq.getMin();
    return ans;
    }
};