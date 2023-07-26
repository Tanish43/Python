#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main(){
    char name[10];
    float sal;
    ofstream outfile("Employee");
    for(int i =0;i<3;i++){
        cout<<"\nEnter the name and salary of "<<i+1<<" Employee : ";
        cin>>name>>sal;
        outfile<<"\n"<<name<<"\t"<<sal; 
    }
    outfile.close();
    ifstream inputfile("Employee");
    for(int i = 0; i<3;i++){
        inputfile>>name;
        inputfile>>sal;
        cout<<"\n EMPLOYEE "<<i+1<<" : ";
        cout<<name<<"\t"<<sal;
    }
    inputfile.close();
    getche();


}