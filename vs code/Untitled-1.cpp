/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>

using namespace std;

int lengthOfLongestSubstring(string s) {
       int i1 = 0, i2 = 0;
       int l = 0;
       for(int i = 0; i< s.size(); i++){
           char s1 = s[i];
           i1 = i;
           for(int j = i+1; j<s.size(); j++){
               if(s1 == s[j]){
                  i2 = j;
               }
               if(l<i2 - i1){
                   l = i2 - i1;
               }
           }
       } 
       return l;
}

int main()
{
    string s = "cabcbb";
    cout<<"Hello World"<<endl;
    cout<<lengthOfLongestSubstring(s);
    return 0;
}
