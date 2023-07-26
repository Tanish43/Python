#include <iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    
    for( int i = 0; input[i] != '\0' ; i++){
        count ++;
    }
    return count;
}
void swapping (char input[]){
    int s = 0;
    int e = length(input) - 1;
    while( input[s] < input[e]){
        swap(s,e);
        s++;
        e--;
        
    }
}
int main (){
    char str[100];
    cout << "Enter your name : ";
    cin.getline( str, 100);
    cout << "\n Your name is : " <<str;
    cout << "length is : " << length(str);
    swapping(str);
    cout << "your name after swapping is : " << str;
    
}