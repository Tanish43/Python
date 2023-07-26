#include <iostream>
using namespace std;

float (*func)(float, float);
float add(float,float);
float sub(float, float);

int main(){
    func = add; // func = &add(it is optional)
    cout<<"\nSum of numbers is : "<<func(1.2,3.2);
    func = sub;
    cout<<"\nSubtraction of numbers is : "<<func(1.2,3.2);
    return 0;
}
float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}