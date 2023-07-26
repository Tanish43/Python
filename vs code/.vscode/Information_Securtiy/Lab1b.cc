#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"\nEnter the message ..."<<endl;
    cin>>str;
    int key;
    cout<<"\nEnter the key for encryption"<<endl;
    cin>>key;
    for(int i = 0; i<str.size(); i++){
        if(str[i] <= 90){ //For uppercase character
            str[i] = (str[i] + key - 'A' )%26 + 'A';
        }
        else{ //Lower case character
            str[i] = (str[i] + key - 'a' )%26 + 'a';
        }
         
    }
    cout<<"\nMessage after encryption... "<<str<<endl;
    for(int i = 0; i<str.size(); i++){
        if(str[i] <= 90){
            if((str[i] - key -'A') > 0){
            str[i] = (str[i] - key -'A')%26 + 'A';
        }
        else{
            str[i] = (str[i] - key -'A' + 26)%26 + 'A';
        }
        }
        else{
            if((str[i] - key -'a') > 0){
            str[i] = (str[i] - key -'a')%26 + 'a';
        }
        else{
            str[i] = (str[i] - key -'a' + 26)%26 + 'a';
        }
        }
         
    }
    cout<<"\nMessage after decryption... "<<str<<endl;
    return 0;
}