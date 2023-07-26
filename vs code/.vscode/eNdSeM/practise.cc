#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};
    node* take_input(){
        int data;
        cout<<"\nEnter the data and -1 to exit";
        cin>>data;
        node*head = NULL;
        node*tail = NULL;
        while(data != -1){
        node *n = new node(data);
        if( head == NULL){
            head = n;
            tail = n;
        } 
        else{
            tail->next = n;
            tail = n;
        }
        cin>>data;
        }
        return head;
    }
    node* takeInput2(){
        int data;
        cin>>data;
        node *head = NULL;  /// LL is empty
        node *tail = NULL;   /// LL is empty
        while(data != -1){
        /// creating LL
            node *n = new node(data);
            /// 1st node
            if(head == NULL){
                head = n;
                tail = n;
        }
        else {
            n -> next = head;   /// Inserting at head
            head = n;
        }
        cin>>data;
   }
   return head;
}
    void printLL(node *head){
        node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    int lengthLL(node* head){
        int count = 0;
         while(head){
            count++;
            head = head ->next;
        }
        return count;
    }
    /*void print_ith(node *head,int count){
        node *temp = head;
        for(int i = 0; i<(count-1);i++){
            temp = temp->next;
        }
        cout<<"\n data at "<<count<<" node is : "<<temp->data;
        
    }*/
    void printIthNode(node *head, int i){
      if(i<0){
        cout<<"-1"<<endl;
        return;
      }
      int count = 1;
      while(count<=i && head!=NULL){
        head = head->next;
        count++;
      }
      if(head){
        cout<<head->data<<endl;
      }else{
        cout<<"-1"<<endl;
      }
}
node* insertAtithPos(node *head, int i, int data){
      if(i<0){
        return head;
      }
      if(i==0){
        node* n = new node(data);
        n->next = head;
        head = n;
        return head;
      }
      node * copyHead = head;
      int count = 1;
      while(count<=i-1 && head!=NULL){
        head = head->next;
        count++;
      }
      if(head){
        /*Node *n = new Node(data);
        n->next = head->next;
        head->next = n;*/
        node *n = new node(data);
        node *temp = head->next;
        head->next = n;
        n->next = temp;
        return copyHead;
      }
      return copyHead;
}


int main(){
    node *head = take_input();
    node *head2 = takeInput2();
    printLL(head);
    printLL(head2);
    int l = lengthLL(head);
    cout<<"\nLength of your linked list is : "<<l;
    printIthNode(head, 3);
}