#include <iostream>
using namespace std;

void reverse_print(char input[]){
    if(input[0] == '\0'){
        return;
    }
    reverse_print(input+1);
    cout<< input[0] <<" ";
}
void print(char input[]){
    if(input[0] == '\0'){
        return;
    }
    cout<< input[0] <<" ";
    print(input+1);

}
int main(){
    char input[]="Hello world";
    print(input);
    cout<<endl;
    reverse_print(input);
    return 0;
}