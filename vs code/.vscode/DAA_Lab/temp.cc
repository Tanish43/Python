#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

#define N 10
int s1[N];
int s2[N];
int top1=-1;
int top2=-1;
int mini=INT_MAX;

void isempty(){
    if(top1==-1){
        cout<<"stack is empty"<<endl;
    }
}
void isfull(){
    if(top1==N-1){
        cout<<"stack is full"<<endl;
    }
}
void push2(int y){
    if(top2==N-1){
        cout<<"stack is full";
    }
    else{
        top2++;
        s2[top2]=y;
    }
}
void push1(int x){
    if(top1==N-1){
        cout<<"stack  is full";
    }
    else{
        top1++;
        s1[top1]=x;
        mini=min(mini,x);
        push2(mini);
    }
}
void pop2(){
    if(top2==-1){
        cout<<"stack is empty";
    }
    else{
        top2--;
    }
}
void pop1(){
    if(top1==-1){
        cout<<"stack is empty";
    }
    else{
        cout<<"poped element is "<<s1[top1]<<endl;
        top1--;
        pop2();
        mini=s2[top2];
    }
}
void getmin(){
    cout<<"minimum element in stack is "<<s2[top2]<<endl;
}
void display(){
    int i;
    if(top1>0){
        cout<<"stack elements are:";
        for(i=top1;i>=0;i--){
        cout<<s1[i]<<" ";
        cout<<endl;
        }
    }
    else cout<<"stack is empty";
}
int main(){
    int x,choice;
    cout<<"MENU\n1.PUSH()\n2.POP()\n3.GET_MIN()\n4.DISPLAY()\n5.EXIT"<<endl;
    do{
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:cout<<"Enter the data:";
            cin>>x;
            push1(x);
            break;
            case 2:pop1();
            break;
            case 3:getmin();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            break;
            default:cout<<"Invalid choice";
        }
    }
    while(choice!=5);
}