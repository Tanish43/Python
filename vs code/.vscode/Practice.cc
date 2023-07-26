#include <iostream>
using namespace std;

template<typename T>
class queues{
    T *arr;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:
    queues(){
        capacity = 4; // by default size.
        arr = new T[capacity];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
    }
    queues(int cap){
        capacity = cap;
        arr = new T[capacity];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void push(int ele){
        if(size == capacity){
            cout<<"\nQueue is full";
            return;
        }
        arr[nextIndex] = ele;
        nextIndex = (nextIndex + 1)%capacity;
        if(firstIndex == -1){
            firstIndex = 0;
        }
        size++;

    }
    void pop(){
        if(isEmpty()){
            cout<<"\nQueue is Empty";
            return;
        }
        firstIndex = (firstIndex +1)%capacity;
        size == -1;
        if(size == -1){
            firstIndex = -1;
            nextIndex = 1; 
        }
    }
    T front(){
        if(isEmpty()){
            cout<<"\nquque is Empty";
            return 0;
        }
        return arr[firstIndex];
    }
};

int main(){
    queues<int> q(5);
 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);
 q.push(60);
 q.push(70);
 cout<<q.front()<<endl;
 q.pop();
 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.getSize()<<endl;
 cout<<q.isEmpty()<<endl;
 q.push(60);
 q.push(70);

 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.getSize()<<endl;
    

    return 0;
}