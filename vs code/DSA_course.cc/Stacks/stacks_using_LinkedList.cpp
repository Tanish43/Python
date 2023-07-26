#include<iostream>
using namespace std;

/* To make Stacks using linked list we need to make linked list in reverse fashion
. If we make simple linked list we cant able to make pop function as we cannot 
treverse backward.
eg. []->[]->[]->[]->[]
where push() is work using tale and pop() using head move forward.  

Main aim to make stacks using linked list is to keep time complexity O(1) like in
stacks using array */
template <typename T>
class Node{
  public:
  T data;
  Node<T> *next;
      Node(T data){
       this->data = data;
       next = NULL;
      }
} ;
//to use template you have to write it before every class. 
template<typename T>
class Stack{
   Node<T> *head;
   int size;
   public:
       Stack(){
          head = NULL;
          size = 0;
       }
       int getSize(){
          return size;
       }
       bool isEmpty(){
          return size==0;
       }
       void push(T ele){
          Node<T> *n = new Node<T>(ele);
          n->next = head;
          head = n;
          size++;
       }
       void pop(){
          if(isEmpty()){
            cout<<"Stack empty"<<endl;
            return;
          }
          Node<T> *temp = head;
          head = head->next;
          temp->next = NULL;
          delete temp;
          size--;
       }
       T top(){
         if(isEmpty()){
            cout<<"Stack empty"<<endl;
            return 0;
          }
         return head->data;
       }
};

int main(){
  Stack<int> s;
  s.push(100);
  s.push(101);
  s.push(102);
  s.push(103);
  s.push(104);

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.getSize()<<endl;
  cout<<s.isEmpty()<<endl;
   return 0;
}
