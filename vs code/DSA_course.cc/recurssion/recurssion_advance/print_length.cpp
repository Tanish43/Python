#include <iostream>
using namespace std;

int length(char input[]){
    if(input[0] == '\0'){
        return 0;
    }
    int small_ans = length(input+1);
    return (small_ans + 1);
}
int main(){
    char input[] = "Tanish";
    int l = length(input);
    cout << l;
    return 0;
}