#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("temp2.txt",ios::app);
    ifstream file_2("temp3.txt");
    string a;
    while(file_2.good())
    {   
        getline(file_2,a);
        file<<a<<endl;
    }
    file.close();
    file_2.close();    
return 0 ;
}

