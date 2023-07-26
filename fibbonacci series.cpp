/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
fibbonacci_sequence (int n, int num3)
{
  int num1 = 0;
  int num2 = 1;
  for (int i = 1; i <= n; i++)
    {
      num3 = num1 + num2;
      num2 = num3;
      num2 = num3;
    }
  return num3;

}


int
main ()
{
  int k;
  int z = 0;
  cout << "this is the programme for fibbonacci sequence \n";
  cout << "Enter the n th digit of fibbonacci sequence you want to find:  ";
  cin >> k;
  int number = fibbonacci_sequence (k, z);
  cout << "\nthe " << k << "th digit of fibbonacci sequence is : " << number;
  return 0;
}
