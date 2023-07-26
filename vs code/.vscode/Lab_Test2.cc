#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    fstream file("File1.txt, ios::out");
    string sub, LTP, code;
    
    cout<<"\nEnter the subject name : ";
    getline(cin,sub);
    file<<sub<<endl;
    
    cout<<"\nEnter the subject code : ";
    getline(cin,code);
    file<<code<<endl;
    
    cout<<"\nEnter the LTP scheme ranging from 0 to 3 : ";
    getline(cin,LTP);
    file<<LTP<<endl;
    
    file.close();
    string x;
    fstream file_2("ReadFile.txt");
    while(file_2.good()){
        getline(file_2,x);
        cout<<x<<endl;
    }
    file_2.close();
    return 0 ;
}