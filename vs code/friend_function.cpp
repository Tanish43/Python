#include <iostream>
using namespace std;

class demo{
    int num1, num2;
    public:
    demo(int x, int y){
    num1 = x;
    num2 = y;
    }
    friend void add(demo z);
    
};
void add(demo z){
cout<< z.num1 + z.num2;
}
int main(){
    demo d1(5,10);
    add(d1);

  return 0;
}