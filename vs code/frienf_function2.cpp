#include  <iostream>
using namespace std;

class B; //pre-Declaration of class
class A{
    int num1;
    public:
    A(int x){
        num1 = x;
        
    }
 friend void add(A,B);   
};
class B{
    int num2;
    public:
    B(int x){
        num2 = x;
        
    }
    friend void add(A,B);
};
void add(A obja, B objb){
    cout << obja.num1 +objb.num2;
}
int main (){
    A p(20);
    B q(30);

    add(p,q);
    return 0;
}