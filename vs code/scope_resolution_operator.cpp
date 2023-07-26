#include <iostream>
using namespace std;

int m = 10;
int main()
{
    int m = 20;
    cout << "value of m is :" << m << endl ;
    cout << "value of ::m is :" << ::m << endl ;
    {
        int m = 50 ;
        cout << "value of m is :" << m << endl ;
        cout << "value of ::m is :" << ::m << endl ;
        {
             int m = 100 ;
        cout << "value of m is :" << m << endl ;
        cout << "value of ::m is :" << ::m << endl ;

        }
    }
    return 0;
}
