#include <iostream>
using namespace std;
// basic to class type conversion using constructors.
class sample{
    int a;
    public:
    sample(){}
    sample(int x){
        a = x;
    }
    void display(){
        cout <<"the value of a = "<< a<<endl;
    }
};
int main(){
    int m = 10;
    sample s;
    s = m;
    sample s1(m);
    s.display();
    s1.display();
    return 0;
}