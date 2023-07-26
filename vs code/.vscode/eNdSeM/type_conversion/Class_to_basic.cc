#include <iostream>
using namespace std;

class sample{
    float a;
    public:
    sample(){
        a = 10.69;
    }
    void display(){
        cout <<"the value of a = "<< a<<endl;
    }
    operator  float(){ //operator overcasting
        float x;
        x = a;
        return x;
    }
};
int main(){
    sample s;
    int y;
    y = s;
    float x = s; 
    cout <<"the value of y = "<<y <<" "<< x <<endl;  
    return 0;
}