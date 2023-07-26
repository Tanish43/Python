#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
    
};
Node* take_input(){
        int k;
    cout<<"\nEnter the data and -1 to stop exit"<<endl;
    cin>>k;
    Node* head = NULL; // in the beginning LL is empty
    Node* tail = NULL;
    while(k != -1){
        Node* n = new Node(k);
        if(head == NULL){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        cin>>k;
    }
    tail->next = head;
    return head;
}

void print(Node *head){
    cout<<"no"<<endl;
    Node* temp = head;
    while(temp->next!= head){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data;
}

int main(){

   Node *head = take_input();
   print(head);
    return 0;
}