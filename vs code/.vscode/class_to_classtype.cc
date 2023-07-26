#include <iostream>
using namespace std;

class alpha{
    int a;
    public:
    alpha(){}
    alpha(int x){
        a = x;
    }
    int getvalue(){
        return a;
    }
    void display1(){
        cout<<" a = "<<a<<endl;
    }
};
class beta : public alpha{
    private:
    int b;
    public:
    beta(){}
    beta(int x){
        b = x;
    }
    beta (alpha temp){ //constructors
    b = temp.getvalue();
    }
    operator alpha(){ //operator function
        return alpha(b);
    }
    void display2(){
        cout<<" b = "<< b <<endl;
    }

};
int main(){
    alpha A(10);
    beta B(5) ;
    //B.display();
   // A = B;
    //A.display1();
    B.display1();
}