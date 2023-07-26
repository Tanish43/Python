/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
  
  
int size = 5;-
int element;
int queue[5];  
int front = -1;  
int rear = -1;  

void enqueue(int input)  
{  
    if(front==-1 && rear==-1)   
    {  
        front=0;  
        rear=0;  
        queue[rear]=input;  
    }  
    else if((rear+1) % size == front)    
    {  
        cout << "Queue is overflow " ;  
    }  
    else  
    {  
        rear=(rear+1) % size;        
        queue[rear]=element;      
    }  
}  
  

int dequeue()  
{  
    if((front==-1) && (rear==-1))    
    {  
        cout << "\n Queue is underflow.." ;  
    }  
 else if(front==rear)  
{  
   cout << "\nThe dequeued element is " << queue[front];  
   front=-1;  
   rear=-1;  
}   
else  
{  
    cout << "\nThe dequeued element is " << queue[front];  
   front=(front+1)%size;  
} 
return 0;
}  
 
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        cout << "\n Queue is empty.." ;  
    }  
    else  
    {  
        cout << "\nElements in a Queue are :";  
        while(i<=rear)  
        {  
            cout << queue[i];  
            i = (i+1) % size;  
        }  
    }  
}  
int main()  
{  
    int choice=1,x;   
      
    while(choice<4 && choice!=0)    
    {  
   cout << "\n Press 1: Insert an element";  
    cout <<"\nPress 2: Delete an element";  
    cout <<"\nPress 3: Display the element";  
    cout <<"\nEnter your choice";  
    cin >> choice;  
      
    switch(choice)  
    {  
          
        case 1:  
      
        cout << "Enter the element which is to be inserted";  
        cin >> x;  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display();  
  
    }}  
    return 0;  
}  