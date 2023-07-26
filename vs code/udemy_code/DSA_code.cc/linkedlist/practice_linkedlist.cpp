#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node (int x){
        this ->data = x;
        next = NULL;
    }
};
Node* takeinput(){
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }
        else{
            tail ->next = n ;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

int length(Node *head){
    int count = 0;
    while (head)
    {
        head = head ->next;
        count++;
    }
    return count;
}

void print(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp ->data<<" -> ";
        temp = temp ->next;
    }
    cout<<"NULL"<<endl;
}
void print_ith(Node *head, int i){
    Node *temp = head;
    for(int j = 1; j< i; j++){
        temp = temp ->next;
    }
    cout<<"element at "<<i<<" is "<< temp ->data <<endl;
}
void search_node(Node *head, int i){
    Node *temp = head;
    int pos = 1;
    while(1){
        if(temp->data = i){
            cout<<"\nElement "<<i <<" is found at "<<pos<<" position";
            break;
        }
        else if(temp = NULL){
            cout<<"Element does not found";
            break;
        }
        else{
            head = head->next;
            pos++;
        }
    }
}
bool Ispresent(Node* head){
    int k;
    cout<<"\nenter the element you want to search";
    cin>>k;
    if(head == NULL){
        return false;
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
    if (flag ! = 1){
        cout<<"\nelement no found";
    }
}
int main(){

    Node *head = takeinput();
    print(head);
    int a = length(head);
    cout<<"\n length is = "<<a;
    cout<<"\n enter the position you want to print";
    int pos;
    cin >> pos;
    print_ith(head, pos);
    search_node(head, 5);

    return 0;
}