/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n, r;
    cout <<"Enter the number you want to verfiy\n";
    cin >> n;
    if (n == 2 ){
        cout << n <<" is prime";
    }
    else if (n > 2){
        for(int i=2; i < n; i++){
            r = n % i;
            if(r != 0){
                cout << n << " is a prime number\n";
            }
            else{
                cout << n << " is a composite number\n";
            }
        }
        
    }
    else{
        cout <<" please enter a number greater than or equal to two";
    }

    return 0;
}