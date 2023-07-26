#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
    
};
Node* take_input1(){
        int k;
    cout<<"\nEnter the data and -1 to stop exit"<<endl;
    cin>>k;
    Node* head1 = NULL; // in the beginning LL is empty
    Node* tail = NULL;
    Node* head2 = NULL; 
    while(k != -1){
        Node* n = new Node(k);
        if(head1 == NULL && head2 == NULL){
            head1 = n;
            head2 = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail->next->prev = tail;
            tail = n;
            head2 = n;
        }
        cin>>k;
    }
    return head1;
}
Node* take_input2(){
        int k;
    cout<<"\nEnter the data and -1 to stop exit"<<endl;
    cin>>k;
    Node* head1 = NULL; // in the beginning LL is empty
    Node* tail = NULL;
    Node* head2 = NULL; 
    while(k != -1){
        Node* n = new Node(k);
        if(head1 == NULL && head2 == NULL){
            head1 = n;
            head2 = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail->next->prev = tail;
            tail = n;
            head2 = n;
        }
        cin>>k;
    }
    return head2;
}
void print1(Node *head){
    cout<<endl;
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
void print2(Node *head){
    cout<<endl;
    while(head != NULL){
        cout<<head->data<<"<->";
        head = head->prev;
    }
    cout<<"NULL"<<endl;
}
int main(){

   Node *head2 = take_input2();
   print2(head2);
   Node *head1 = take_input1();
   print1(head1);
    return 0;
}