#include <iostream>
using namespace std;

class node{
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
    void print_LL(node* head){
        node* n = head;
        while(n != NULL){
            cout<<n->data<<" ";
            n = n->next;
        }
    node * takeinput(){
        int data ;
        cout<<"Important message : To exit the linkedlist enter -1 \n" ;
        cout<<"Enter data\n";
        cin>>data ;
        node * head =NULL ;
        node * tail = NULL ;
        while(data!=-1){
            node * n1 = new Node(data) ;
                if(head==NULL){
                    head = n1 ;
                    tail = n1 ;
                    } 
                else{
                    tail->next=n1 ;
                    tail=tail->next ;
                     }
            cin>>data ;
            }
        return head ;
    }
};

int main(){
Node * head = takeinput();
Node * nh=reverse(head) ;
printLL(nh) ;
}
    