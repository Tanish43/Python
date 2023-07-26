#include <iostream>
using namespace std;

double power(double m,int n=2){
    double ans = 1;
    for(int i=0; i< n; i++){
        ans = m *ans;
    }
    return ans;
}

int main(){
    double m;
    int n;
    cout <<"\n Enter the number and the power";
    cin >> m >> n;
    double pow = power(m,n);
    cout<<"\n the result is : "<<pow<<endl;
    double pow1 = power(5);
    cout<<" \n After passing power as defualt arguement i.e 2 the result is : "<<pow1<<endl;
}