#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class stacks{
    Node* head;
    int size;
    stacks(){
        head = NULL;
        size = 0;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void push(int ele){
        Node *n = new node(ele);
        n->next = head;
        head = n;
        size++;
    }
    void pop(){
        if(size == 0){
            cout<<"\nStack is underflow";
            return;
        }
        else{
            head = head->next;
            size--;
        }
    }
}
int main(){

    return 0;
}