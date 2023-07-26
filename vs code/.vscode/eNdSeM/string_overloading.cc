#include<iostream>
#include<string.h>
using namespace std;
class String
{   string a;
public:
    
    void read()
    { cout<<"enter string"<<endl;
    cin>>a;
    }

    void operator==(String obj)
    {
       String temp;
        temp.a= a + obj.a;
       cout<<temp.a; }
};
int main(){
    
    String obj1;
    String obj2;
    obj1.read();
    obj2.read();
    obj1 == obj2;
   return 0;
}