#include <iostream>
using namespace std;

int main(){
    int a[10];
    cout<<"\n Enter the numbers";
    for (int i = 0; i<10;i++){
        cin >> a[i];

    } 
    for (int i = 0; i<10;i++){
        cout << a[i] << endl;
    }
    int largest = a[0];
    for (int i = 0; i<10;i++){
        if( largest < a[i]){
            largest = a[i];
        }
    }
    cout <<"\n Largest Value is : "<< largest;
}