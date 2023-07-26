#include <iostream>
using namespace std;

class stacks {
    private:
    int *arr;
    int nextIndex, capacity;

    public:
    stacks(){
        capacity = 4;
        arr = new int[capacity];
        nextIndex = 0;
    }
    stacks(int cap){
        capacity = cap;
        arr = new int[capacity];
        nextIndex = 0;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return (nextIndex == 0);
    }
    void push(int ele){
        /* for static stack
        if (nextIndex == capacity){
            cout<<"\nStack is full";
            return;
        }*/
        if( nextIndex == capacity){
            int *new_arr = new int[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                new_arr[i] = arr[i];
            }
            delete []arr;
            arr = new_arr;
            capacity = 2*capacity;
            
        }
        arr[nextIndex] = ele;
        nextIndex++;
    }
    void pop(){
        if(isEmpty()){
            cout<<"\nStack is empty";
            return;
        }
        nextIndex--;
    }
    int top(){
    if(isEmpty()){
            cout<<"\nStack is empty";
            return -1;
        }
        return arr[nextIndex -1];
        
    }
    int getmin(){
        stacks s;
        int ni  = nextIndex;
        if(isEmpty()){
            return -1;
        }
        s.push(top());
        pop();
        while(nextIndex != 0){
            int k = top();
            if(k < s.top()){
                s.pop();
                s.push(k);
            }
            pop();
        }
        nextIndex = ni;
        return s.top();
    }
};
int main(){
    stacks s;
    s.push(5);
    s.push(3);
    s.push(7);
    s.pop();
    s.push(2);
    cout<<"Minimum element is: "<<s.getmin()<<endl;
    return 0;
}