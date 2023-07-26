#include <iostream>
using namespace std;

int sum (int a, int b){
    return a+b;
}
int sum(int a ,int b, int c){
    return a+b+c;
}
int sum (int a, double b){
    return a+b;
}
int sum (double  a, int b){
    return a+b;
}
/*void sum (int a, int b){ ///this bitch is not allowed.
    cout<< a+b;
}*/

int main(){
    cout<<sum(1,2)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2.2)<<endl;
    cout<<sum(1.2,2)<<endl;
    cout<<sum(1,2)<<endl;
    
    return 0;

}