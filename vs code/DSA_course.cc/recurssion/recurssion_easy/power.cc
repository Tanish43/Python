#include <iostream>
using namespace std;

int pow(int x, int y){
    if (y == 1)
    {
        return x;
    }
    else{
        return (x * pow( x, y-1));
    }
    
}
int main(){
    cout<< pow(2,5);
}