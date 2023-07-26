#include <iostream>
using namespace std;

class Sample{
    int m;
    public:
    Sample(){
        m =0;
    } 
    Sample(int x){
        m = x;
    }
    void display(){
        cout<<m<<endl;
    }
};

int main(){
    int m = 10;
    Sample s;
    s=m;//s(m)
    s.display();
    return 0;
}