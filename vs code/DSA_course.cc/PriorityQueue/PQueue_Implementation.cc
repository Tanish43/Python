#include<iostream>
#include<vector>
using namespace std;

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
            return 0;
        }
        else{
            return pq.at(0);
        }
    }
    void insert(int ele){
        pq.push_back(ele);
        int  ci = (pq.size() - 1); //last node 
        while(ci > 0){
            int pi = (ci - 1)/2;
            if(pq[ci] < pq[pi]){
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
            return 0; // pq is empty
        }
        int ans = pq[0];
        swap(pq[0], pq[pq.size()-1]); // swap minimum element with last element
        pq.pop_back(); // pop minimum(last) element

        int pi = 0;
        while(true){
            int mini = pi;
            int lci = pi*2 + 1;
            int rci = pi*2 + 2;
            if(lci < pq.size() && pq[lci] < pq[mini]){ // update mini index if left child is small than parent
                mini = lci;
            }
            if(rci < pq.size() && pq[rci] < pq[mini]){ // update mini index if right child is small than parent
                mini = lci;
                mini = rci;
            } 
            if(mini == pi){ // it means there is no updation in mini value..so loop will be break
                break;
            }
            swap(pq[pi], pq[mini]); // swap mini(minimum)index with parent index

        }
        return ans; // return min i.e parent index
    }
};

int main(){
    PriorityQueue p;
   p.insert(100);
   p.insert(10);
   p.insert(15);
   p.insert(4);
   p.insert(17);
   p.insert(21);
   p.insert(67);

   cout<<p.getsize()<<endl;
   cout<<p.getMin()<<endl;

   while(!p.isEmpty()){
    cout<<p.removeMin()<<" ";
   }
    return 0;
}