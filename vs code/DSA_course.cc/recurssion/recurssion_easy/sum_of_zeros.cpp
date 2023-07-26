#include <iostream>
using namespace std;

int sum( int n){
    if(n ==0 ){
        return 0;
    }
    int smallans = sum(n/10);
    int lastdigit = n % 10;
    return (smallans + lastdigit); 
}
int main(){
cout<< sum(12345);
    return 0;
}