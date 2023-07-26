#include <iostream>
using namespace std;

void print_steps(int n,char s,char d,char h){ //no. of steps, source, helper, destination
    if(n==0){
        return;
    }  
    print_steps(n-1,s,h,d);
    cout << n <<" steps from "<< s<<" to "<< d<<endl;
    print_steps(n-1,h,d,s);
}
int main(){
    int steps;
    cout<<"\n Enter the steps : ";
    cin >> steps;
    print_steps(steps,'A','C','B');
    return 0;
}