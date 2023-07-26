#include <iostream>
#define size 5
using namespace std;

int main(){
    int N;
    cout<<"\nEnter the size of your array"<<endl;
    int arr[size][size];
    cin >> N;
    cout<<"\nEnter the value 1 if person know other else enter 0"<<endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }
            
    int ID;
    for(int j=0; j<N; j++){
        int sum=0;
        for(int i=0; i<N; i++){
            sum+=arr[i][j];
        }
        if(sum==N-1){
            ID=j;
            break;
        }
    }
    
    int check=0;
    
    for(int j=0; j<N; j++){
        check+=arr[ID][j];
    }
    
    if(check==0)
        cout << "Person with id = " << ID << " is a celebrity" << endl;
    else
        cout << "There is no celebrity" << endl;

    return 0;
}