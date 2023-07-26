#include<iostream>
#include<fstream>
using namespace std;


int main(){

    fstream read_file;
    read_file.open("samplee.txt",ios::in);
    if(!read_file){
        cout<<"\nFile not created";
    
    }
    else{
        char ch;
        while (1)
        {
            read_file>>ch;
            if(read_file.eof())
            break;
            cout << ch;
        }
    }
    read_file.close();



    return 0;
}