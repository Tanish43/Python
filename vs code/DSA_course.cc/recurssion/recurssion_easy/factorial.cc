#include <iostream>
using namespace std;
int fact(int n,const int x ){
    if (n == 1){
        cout<<x;
        return 1;
    }
    else{
        cout << x-(n-1)<<"*";
        return n * fact(n-1,x);
    }
}
int main(){
    int n, ans;
    cin >> n;
    ans = fact(n,n); 
    cout<< " = "<<ans;
}