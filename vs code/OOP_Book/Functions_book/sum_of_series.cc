#include <iostream>
using namespace std;

int fact(int r){
    int i = r;
    r = 1;
    for (int i = r; i >= 1;i--){
         r= r*i;
    }
    return r;
}
//print sum of 1/1! + 1/2! + .........+ 1/n!
int main(){
    int n , f;
    float ans = 0;
    cout <<"\n Enter the end term of the series : ";
    cin>> n;
    for(int i = 1; i <= n ;n++){
    f = fact(i);
    ans = ans + 1/(float)f;
    }
    
    cout <<"\n sum of 1/1! + 1/2! + ......... is : " <<ans;
    return 0;
}