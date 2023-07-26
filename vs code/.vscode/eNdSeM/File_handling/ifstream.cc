#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char ch[50];
    ifstream rcv("abd.txt", ios::in);
    rcv.getline(ch,50);
    //rcv>>ch;
    rcv.close();
    cout<<"\n"<<ch;
    return 0;
}
