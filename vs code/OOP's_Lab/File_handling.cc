#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream f1;
    string line;
	f1.open("samplee.txt",ios::out);
    if(!f1)
    {
        cout<<"file not found";
    }
    else
    {
        f1<<"My name is tanish";

    }
	f1.close();
    return 0;
}
