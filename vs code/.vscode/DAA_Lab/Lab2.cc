#include<iostream>
#include <stack>
using namespace std;
/*We can do both with stacks and recurssion and iterative method*/
class Node {
   public:
     int data;
     Node *next;

     Node(int data){
       this->data = data;
       next = NULL;
     }
}; 
Node* reversing_LL(Node* head, int k) 
{ 
    if (!head) 
        return NULL; 
    Node* current = head; 
    Node* next = NULL; 
    Node* prev = NULL; 

    int count = 0; 

    while (current != NULL && count < k) { 
        
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
        count++; 
    } 

    if (next != NULL) 
        head->next = reversing_LL(next, k); 
    return prev; 
} 
 
void print(Node *head){

    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
/*int input_length(Node *head){
    int count = 0;
    while(head){
        count++;
        head = head ->next;
    }
    return count;
}*/

Node* takeInput(){
   int data;
   cin>>data;
   Node *head = NULL;  
   Node *tail = NULL;   
   while(data != -1){
    Node *n = new Node(data);
    if(head == NULL){
        head = n;
        tail = n;
    }else {
        tail -> next = n;   
        tail = n;            
    }

    cin>>data;
   }
   return head;

}
int main(){
   int k;
   Node *head = takeInput();
   print(head);
   cout<<"\nEnter the order in which you wnat to reverse the linked list";
   cin>>k;
   Node *H = reversing_LL(head,k);
   print(H);
   return 0;
}
