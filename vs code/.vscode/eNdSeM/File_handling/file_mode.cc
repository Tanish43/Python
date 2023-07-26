#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file1, file2, file3;
    file1.open("first.txt",ios::in);
    file2.open("second.txt",ios::in);
    file3.open("third.txt",ios::app);

    char ch1[50], ch2[50];
    while(!file1.eof()){
        file1.getline(ch1,50);
        file3<<ch1;
    }
    file1.close();
     while(!file2.eof()){
        file2.getline(ch2,50);
        file3<<endl;
        file3<<ch2;
    }
    file2.close();
    file3.close();
    return 0;
}