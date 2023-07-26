#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidString(string a){
    stack<char> s;
    for(int i = 0; i< a.size();i++){
        if(a[i] == '(' || a[i] == '{' || a[i] == '['){
            s.push(a[i]);
        }
        else{
            //to prevent runtime error when stack is empty and we want to access top element
            if(s.empty()){
                return false;
            }
            else if(a[i] == ')'){
                if(s.top()=='('){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else if(a[i] == '}'){
                if(s.top()=='{'){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else if(a[i] == ']'){
                if(s.top()=='['){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
    } 
    if(s.empty()){
        return true;
    } 
    else{
        return false;
    }
}
int main(){
    string s;
    cout<<"\nEnter the string of parethesis"<<endl ;
    cin>>s;
    cout<<s;
    if(isValidString(s)){
        cout<<"\n it is a balanced parethesis";
    }
    else{
        cout<<"\nIt is not balanced";
    }
    return 0;
}