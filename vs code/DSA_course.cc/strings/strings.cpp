#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abc";//declaring statically
   cout<<s<<endl;

   string *sp = new string;//Declaring dynamically
   *sp = "mno";
   cout<<sp<<endl;//adress of the string sp
   cout<<*sp<<endl;

   vector<string> v;//Vectors of a string
   v.push_back(s);
   v.push_back("hello");

   for(int i=0;i<v.size();i++){//Creating loop to print all preasent in vector
    cout<<v[i]<<endl;
    sort(v[i].begin(),v[i].end());
    cout<<v[i]<<endl;
   }

   string s2;
   s2 = "def";
   cout<<s2<<endl;
   string s3;
   //getline(cin, s3);//to input string with spaces and line
  // cout<<s3<<endl;

   s3 = "abcabc";
   cout<<s3[1]<<endl;
   s3[0] = 'd';
   cout<<s3<<endl;

   string s4 = "";
   s4 += s3 + s2 + "hello coding";//Add strings
   cout<<s2<<endl;
   cout<<s3<<endl;
   cout<<s4<<endl;
   cout<<s4.size()<<endl;// tell the size or total no. of character
   cout<<s4.length()<<endl;// both function are same

   cout<<s4.substr(3)<<endl;//substr->Subtring it takes two arguement first index and total character of substring
   string s5 = s4.substr(3,5);
   cout<<s5<<endl;

   cout<<s4.find("abc")<<endl;//find the first index of 'abc' if exist

   int a = 123;
   string s6 = to_string(a);//convert int to string
   cout<<s6<<endl;
   s6[1] = '4';
   cout<<s6<<endl;

    s6.push_back('5');
    cout<<s6<<endl;

    a = atoi(s6.c_str());//convert string to integer
    cout<<a<<endl;

   return 0;
}
