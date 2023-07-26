#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream send;
    char ch = 'A';
    send.open("abc.txt");
    send<<ch;
    send.close();

    return 0;
}