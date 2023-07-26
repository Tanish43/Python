#include <iostream>
using namespace std;
class alplha{
    private:
    int a;
    public:
    alplha(){}
    alplha(int x){
        a = x;
    }
    int get_value1(){
        return a;
    }
};
class beta{
    private:
    int b;
    public:
    beta(){}
    beta(int x){
        b = x;
    }
    int get_value2(){
        return b;
    }
    beta(alplha temp){
        b=temp.get_value1();
        cout<<"\nContructor Method";
    }
    operator alplha(){
        cout<<"\nCasting Operator function method";
        return alplha(b);
    }
};
int main(){
    alplha A(6);
    beta B = A;// beta B(A)
    B.get_value2();

    return 0;
}