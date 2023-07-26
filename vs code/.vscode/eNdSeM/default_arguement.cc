#include <iostream>
using namespace std;

int sum(int a=0 , int b=5 ){
    return a+b;
}
/*int sum(int a =5, int b ){ this will be invalid as default value is pass to the arguement from left to right
    return a+b;
}*/
int main(){
    cout<<sum(1,2)<<endl;
    cout<<sum(1)<<endl;
    cout<<sum()<<endl;
    return 0;
}