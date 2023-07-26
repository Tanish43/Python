#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string text;
    cout<<"\nEnter the text!!.."<<endl;
    cin>> text;
    for(int i = 0; i<text.size(); i++){
        if(text[i]>= 97 ){
            text[i] -= 32;
        }
    }
    cout<<text;
    ofstream inputfile("txt");
    inputfile << text;
    inputfile.close(); 
    return 0;
}