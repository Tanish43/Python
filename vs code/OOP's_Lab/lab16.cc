#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("temp.txt");
    string a;
    cout<<"Enter Your Name : ";
    getline(cin,a);
    file<<a<<endl;
    cout<<"Enter Your RollNo. : ";
    getline(cin,a);
    file<<a<<endl;
    file.close();
    string x;
    ifstream file_2("temp.txt");
    while(file_2.good())
    {   
        getline(file_2,x);
        cout<<x<<endl;
    }
    file_2.close();
    
return 0 ;
}

