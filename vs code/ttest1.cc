#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    ofstream file("File1.txt");
    string sub, LTP, code;
    
    cout<<"\nEnter the subject name";
    getline(cin,sub);
    file<<sub<<endl;
    
    cout<<"\n\tEnter the subject code";
    getline(cin,code);
    file<<code<<endl;
    
    out<<"\n\tEnter the LTP scheme ranging from 0 to 3";
    getline(cin,LTP);
    if(!(LTP == "0" ||LTP == "1" ||LTP == "2" ||LTP == "3"){
        cout<<"\n\tInvalid Input";
        return 0;
    }
    else{
    file<<LTP<<endl;
    }
    
    file.close();
    string x;
    ifstream file_2("temp.txt");
    while(file_2.good()){
        getline(file_2,x);
        cout<<x<<endl;
    }
    file_2.close();
    return 0 ;
}