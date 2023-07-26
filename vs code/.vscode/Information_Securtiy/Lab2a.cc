// Write a program to find multplicative inverse of a number
#include <iostream>
using namespace std;

int Find_mod_Inverse(int a, int m)
{
    for (int i = 1; i < m; i++)
    {
        if (((a % m) * (i % m)) % m == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a, m;
    cout << "Enter number of which multiplicative inverse we want to find" << endl;
    cin >> a;
    cout << "Enter the modulo" << endl;
    cin >> m;
    cout << "The value of x is"
         << " ";
    int ans = Find_mod_Inverse(a, m);
    cout << ans;

    // cout<<"s";
    return 0;
}