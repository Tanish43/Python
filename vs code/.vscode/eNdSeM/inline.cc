#include <iostream>
using namespace std;

inline int cube(int n){
    return (n*n*n);
}
int main(){
    cout<<"\nVolume of the cube is: "<<cube(4);

    return 0;
}