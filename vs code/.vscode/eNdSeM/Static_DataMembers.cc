#include <iostream>
using namespace std;

class increment{
    static int count;
    public:
    increment(){
    cout<<"\n Count is: "<<++count;
    }
};
int increment:: count = 10;

int main(){
    increment i1, i2, i3;


    return 0;
}