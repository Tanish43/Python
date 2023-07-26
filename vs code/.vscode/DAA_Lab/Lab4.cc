#include <iostream>
#include <cmath>
#include <algorithm>
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
Node* Take_input(){
    int k;
    cout<<"\nEnter the number"<<endl;
    cin>>k;
    int div = k;
    Node* head = NULL;
    Node* tail = NULL;
    int n = log10(k) +1;
    Node* n1  = new Node(k%10);
    n1->next = NULL;
    tail = n1;
    int rem = div % 10;
    for(int i = 1; i<n;i++){
        div = (div - rem)/10;
        rem = div % 10;
        Node* n  = new Node(rem);
        n->next = tail;
        tail = n;

    }
    return tail;
}
int inputLength(Node *head){
    int count =0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}
Node* reverseLL(Node *head){
    Node *prev = head;
    Node *curr = head->next;
    prev->next =NULL;
    while(curr){
        Node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}
Node* addLL(Node* head1, Node* head2){
    int l1 = inputLength(head1);
    int l2 = inputLength(head2);
    int l = min(l1,l2);
    head1 = reverseLL(head1);
    head2 = reverseLL(head2);
    Node* head = NULL;
    int carry = 0;
    int k  = head1->data + head2->data + carry;
        head1 = head1->next;
        head2 = head2->next;
        int n = k%10;
        carry = k/10; 
        Node* N = new Node(n);
         N->next = NULL;
        head = N;
    for(int i = 1; i<l; i++){
        int k  = head1->data + head2->data + carry;
        head1 = head1->next;
        head2 = head2->next;
        int n = k%10;
        carry = k/10; 
        Node* N = new Node(n);
            N->next = head;
            head = N;
    }
    if(carry != 0 &&  l1  == l1){
        Node* N1 = new Node(carry);
        N1->next = head;
        head = N1;
    }
    if(l1 > l2){
        if(carry != 0){
            head1->data += 1;
        }
        while(head1){
        Node* N2 = new Node(head1->data);
        N2->next = head;
        head = N2;
        head1 = head1->next;
       }
    }
    else{
        while(head2){
            if(carry != 0){
            head2->data += 1;
        }        Node* N2 = new Node(head2->data);
        N2->next = head;
        head = N2;
        head2 = head2->next;
        }
    }
    return head;
}
void print(Node *head){
    cout<<endl;
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head1 = Take_input();
    print(head1);
    Node* head2 = Take_input();
    print(head2);
    Node* head3 = addLL(head1,head2);
    cout<<"\nsum of numbers are: ";
    print(head3);
    return 0;
}