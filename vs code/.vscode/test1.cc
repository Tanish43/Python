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
    for(int j = 1; j< i; j++){
        head = head ->next;
    }
    cout<<"element at "<<i<<" is "<< head ->data <<endl;
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

    return 0;
}