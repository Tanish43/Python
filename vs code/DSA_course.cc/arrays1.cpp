#include <iostream>
using namespace std;

int main(){
    
    int a[10] = {1,2,3,4,5};
    for(int i = 0;i <10 ;i++){
        cout<<a[i] <<endl;
    }
    cout <<"size will be"<<sizeof(a);
    return 0;
}