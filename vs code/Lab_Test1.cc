#include <iostream>
#include <cstring>

using namespace std;

class STRING{ 
    private:
    string str;
    
    public:
    void input_string() {
        cout<<"\nEnter the string : ";
        getline(cin,str);
    }

    void display_string(){
        cout<<"\nYour string is : "<<str<<endl; 
        }
        
    STRING operator + (STRING s2) {
        STRING s3;
        s3.str = str + " " + s2.str;
        return s3;
    }

friend bool compare_string(STRING s1,STRING s2);

};

bool compare_string(STRING s1,STRING s2){ 
    return (s1.str==s2.str); 
}

int main() {
    
    STRING s1, s2, s3;
    cout<<"\tString A : "<<endl;
    s1.input_string();
    
    cout<<"\n\tString B : "<<endl;
    s2.input_string();
    
    cout<<"\n\tString A : "<<endl;
    s1.display_string();
    
    cout<<"\n\tString B : "<<endl;
    s2.display_string();
    
    if(compare_string(s1,s2)){
        cout<<"\nThe Strings are equal."<<endl;
    }
    else{
        cout<<"\nThe Strings are not equal"<<endl;
    }
    s3 = s1 + s2;
    cout<<"\n\tString C (concatenation of A and B) : "<<endl;
    s3.display_string();
    return 0;
}