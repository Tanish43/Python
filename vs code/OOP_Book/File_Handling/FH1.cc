#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

class student{
    int roll_no ;
    char name;
    public:
    void getdata(){
        cout<<"\nEnter the name, roll no.";
        cin >> name >> roll_no;
    }
};

int main(){
    student s;
   // ofstream file("student_data",ios::out);
      ofstream file;
      file.open("student_data");
      char op;
      do{
        s.getdata();
        file.write((char *)&s,sizeof(s));
        cout<<"\nOne more row is created";
        cout<<"\nEnter Y  or y to write another row or press N or n to close";
        cin >> op;
      }
        while( op == 'Y' || op == 'y');
      file.close();
      return 0;
}
