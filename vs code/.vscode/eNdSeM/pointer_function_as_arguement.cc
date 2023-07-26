#include <iostream>
using namespace std;

float operation(float(*operate_fp)(float, float),float a, float b);
float add(float,float);
float sub(float, float);

int main(){
    float result = operation(add,1.2,3.2);
    cout<<"\nAddition of two numbers is : "<<result;
    result = operation(sub,1.2,3.2);
    cout<<"\nSubtraction of two numbers is : "<<result;
    return 0;
}
float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float operation(float(*operate_fp)(float, float),float a, float b){
    float result;
    result = operate_fp(a,b);
    return result;
}
