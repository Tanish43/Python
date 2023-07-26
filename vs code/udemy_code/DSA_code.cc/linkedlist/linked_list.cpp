#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
    void print(Node *head){
        while(head != NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
    }
};

int main(){
    Node n1(4),n2(2),n3(3),n4(4),n5(5); //statically
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    Node *head = &n1;
    n1.print (head);
    /*cout<<n1.data<<" "<<n2.data <<endl;
    Node *head = &n1;
    cout<<head->data<<endl;
    //dynamically

    Node *n3 = new Node (3);
    Node *n4 = new Node (6);
    n3->next = n4;*/

    return 0;
}