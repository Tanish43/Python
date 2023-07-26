#include <iostream>
using namespace std;

//Insert node at ith position
//Delete node at ith(without memory leak)
//length-recursive
//search in linked list(iterative and recursive)
//middle node-slow and fast pointer approach
//reverse linked list
//delete ith node from last
//merge 2 sorted list(iterative and recursive)
//merge sort on linked list
//doubly linked list
//circular singly LL
//circular doubly LL  

/* points to remember:-
        1) Static memory is allocated before execution at compile time whereas 
        dynamic memory allocation is done at execution time or runtime
        
        2)new keyword syntax -> pointer-variable = new data-type;
        eg:- char *name  = new char [10];
        delete keyword syntax -> delete pointer-variable;*/

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* Take_input(){
    int k;
    cout<<"\nEnter the data and -1 to stop exit"<<endl;
    cin>>k;
    Node* head = NULL; // in the beginning LL is empty
    Node* tail = NULL;
    while(k != -1){
        
        /* Node is created dynamically because if we create it statically than its value 
        will be automatically removed after first iteration as it visibility is only
        in the curly braces of while loop but not in the case of dynmaic allocating. 
       */
        Node* n = new Node(k);//dynamic allocation using parametrise constructor
        if (head == NULL){
            head = n; //this is statically allocated so to change value at every iteration
            tail = n;//to connect first node with head and tail.
            
        }
        else{
            tail->next = n;//conncecting two consecutive node
            tail = n;//updating tail to next node
        }
        cin>>k;//to input after first time
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
int inputLength(Node *head){
    int count =0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}
int inputLength2(Node *head){
    if(head == NULL){
        return 0;
    }
    int ans = 1 + inputLength2(head->next);
    return ans;
}
/*void insertNode(Node *head){
    int k, data;
    cout<<"\nEnter the position after which you want to insert the node and data";
    cin>>k>>data;
    Node *temp = head;
    for(int i =1; i< k;i++){
        temp = temp->next;
    }
    Node *n = new Node(data);
    n->next = temp->next;
    temp->next = n;
}*/
 Node* insertNode(Node *head){
    int i, data;
    cout<<"\nEnter the position after which you want to insert the node and data";
    cin>>i>>data;
    if(i<0){
        return head;//Linked List is empty
      }
      if(i==0){
        Node* n = new Node(data);
        n->next = head;
        head = n;      //Linked list contains only one node
        return head;
      }
      Node *copyHead = head;
      int count = 1;
      while(count<=i-1 && head!=NULL){ //move head pointer to position before inserting node
        head = head->next;
        count++;
      }
      if(head){ //Means head exist so run the condition
        /*Node *n = new Node(data);
        n->next = head->next;
        head->next = n;*/
        Node *n = new Node(data);
        Node *temp = head->next;
        head->next = n;
        n->next = temp;
        return copyHead;
      }
      return copyHead;
 }
/*void deleteNode(Node *head){
    int k ,count=0;
    Node *temp = head;
    cout<<"\nEnter the node position you want to delete";
    cin>>k;
    while(count != (k-2)){
        temp = temp->next;
        count ++;
    }
    temp->next = temp->next->next;
}*/

Node* deleteithNode(Node* head){
    int i ;
    cout<<"\nEnter the node Index** you want to delete";
    cin>>i;
    if(i<0){
      return head; //Linked list is empty
    }
    if(i==0 && head){ //for i = 0 and head exist
    Node* newHead = head->next;
    head->next = NULL; //Delete 1st node
    delete head; //delete to avaoid memory leak
    return newHead;
    }

   Node* curr = head;
   int count = 1;
   while(count<=i-1 && curr!=NULL){
    curr = curr->next;
    count++;
   }
   if(curr && curr->next){
     Node *temp = curr->next;
     curr->next = curr->next->next;//to remove the connection of that node
     temp->next=NULL;//process to avoid memory leak...1st isolate and than delete that node
     delete temp;
     return head;
   }
   return head;
}

void Ispresent(Node* head){
    int k;
    cout<<"\nenter the element you want to search";
    cin>>k;
    if(head == NULL){
        cout<<"\nelement no found";
    }
    int pos = 1, flag =0;

    while(head){
        if(head->data == k){
            cout<<"\nelement found at pos "<<pos;
            flag = 1;
        }
        head = head->next;
        pos++;
    }
    if (flag != 1){
        cout<<"\nelement no found";
    }
}
/*bool isPresent(Node *head, int data){
     Node *curr = head;
     while(curr!=NULL){
        if(curr->data == data){
            return true;
        }
        curr = curr->next;
     }
     return false;
}*/
/*TO print middle element of the linked list
  if the number of node are odd print middle but if number of node are
  even than print second middle element
  
  it is solved using slow and fast pointer approach in which fast pointer cover
  two steps fast than slow pointer. 
  eg. total length is l and two car one with speed v and 2v run...when car with speed
  2v covers the length l than slower car will cover speed l/2 */

void middleNode(Node* head) {
         Node* slow = head;
         Node* fast = head->next;
         cout<<endl;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast!=NULL){  /// even
            cout<< slow->next->data;
        }
        else{cout<< slow->data;}  /// odd
    }//Thought store data in array and than find mid;
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

/*Delete ith element from the end :-
eg. two cars with same speed v and relative distance k are travelling
when second car cover distance l other will cover l-k*/

/*Node* deleteFromEnd(Node *head){
    int k;
    cout<<"\nEnter the position from the end you want to delete";
    cin>>k;
    Node *one = head;
    Node *two = head;
    while( k-- ){
        two = two->next;
    }
    while(two){
        one= one->next;
        two = two->next;
    }
    Node *temp = one->next;
    one->next = one->next->next;
    temp = NULL;
    delete temp;
    return head;
    
    }
    Node* removeNthFromEnd(Node* head) {
        Node* one = head;
        Node* two = head;
        int k;
        cout<<"\nEnter the position from the end you want to delete";
        cin>>k;
        
        while(k--){ /// k times
            two = two->next;
        }
        if(two==NULL){   /// length of ll = k  => delete head node
            return one->next;
        }
        while(two->next!=NULL){
            one = one->next;
            two = two->next;
        }
        
        /// delete kth node from end
        one->next = one->next->next;      /// memory leak
        
        return head;
    }*/
    Node* addLL(Node* head1, Node* head2){
    Node* temp = head1;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = head2;
    Node* head = head1;
    head2 = NULL;
    delete head2;
    return head;
}

int main(){
    Node *head = Take_input();
    print(head);
    //int length = inputLength2(head);
    //cout<<"\n length of the linked list is "<<length;
    //head = insertNode(head);
    //print(head);
    //head = deleteithNode(head);
    //Ispresent(head);
    //print(head);
    //middleNode(head);
    Node *newhead = reverseLL(head);
    print(newhead);
    head = deleteFromEnd(head);
    print(head);
    return 0;
}
Node* sumLL(Node* head, int x, int y){
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    Node* n1 = new Node(x);
    Node* n2 = new Node(y);
    Node* n3 = new Node(x+y);  
    temp->next = n1;
    temp = n1;
    temp->next = n2;
    temp = n2;
    temp->next = n3;
    temp = n3;
    temp->next = NULL;
    return head;

}