#include <iostream>
using namespace std;

class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int x){
        a=x;
    }
    void display(){
        cout<<a<<endl;
    }
    void operator ++(int x){
    a++; 
    }
};

int main(){
    number n1(5);
        n1.display();

    n1++;
    n1.display();
    
   
    return 0;
}