#include <iostream>
using namespace std;
template <typename T>
/*Head pointer will act as front index and tail pointer manages next index*/
class Node{
    public:
    T data;
    Node<T>* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
template <typename T>
class queue{
    Node<T>* head;
    Node<T>* tail; 
    int size;
    public:
    queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    int get_size(){
        return size;
    }
    bool IsEmpty(){
        return size==0;
    }
    void push(int k){
        Node<T>* n = new Node<T>(k);
        if(size==0){
        head = n;
        tail = n;
        size++;
        }
        else{
            tail->next = n;
            tail = n;
            size++;
        }
    }
    void pop(){
        Node<T>* temp = head;
        head = head->next;
        temp = NULL;
        delete temp;
        size--;
    }
    int front(){
        //to avoid runtime error
        if(IsEmpty()){
            return 0;
        }
        return head->data;
    }

};
int main(){
    queue<int> q;
    cout<<"\nFront elemet is: "<<q.front()<<endl;
    cout<<"\nsize of queue is: "<<q.get_size()<<endl;
    if(q.IsEmpty()){
        cout<<"\nQueue is empty";
    }
    else{
        cout<<"\nQueue has some elements";
    }
    // 30 40
    //20 3 
    q.push(10);
    q.push(20);
    q.pop();
    q.push(30);
    cout<<"\nFront elemet is: "<<q.front()<<endl;
    q.push(40);
    cout<<"\nsize of queue is: "<<q.get_size()<<endl;
    q.pop();
    cout<<"\nFront elemet is: "<<q.front()<<endl;
    q.pop();
    q.push(50);
    cout<<"\nsize of queue is: "<<q.get_size()<<endl;
    q.push(60);
    cout<<"\nsize of queue is: "<<q.get_size()<<endl;
    cout<<"\nFront elemet is: "<<q.front()<<endl;
    q.push(70);
    q.pop();
    cout<<"\nFront elemet is: "<<q.front()<<endl;
    cout<<"\nsize of queue is: "<<q.get_size()<<endl;
    if(q.IsEmpty()){
        cout<<"\nQueue is empty";
    }
    else{
        cout<<"\nQueue has some elements";
    }
    return 0;
}