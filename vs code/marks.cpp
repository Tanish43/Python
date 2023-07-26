#include <iostream>
using namespace std;

class marks{
    private:
    int marks1 ;
    int marks2 ;

    public:
    int enter_marks(int mrk1, int mrk2){
        marks1 = mrk1;
        marks2 = mrk2;
        return marks1 + marks2;
    }
    void display_marks(){
        
        cout<<  " Marks in maths = " << marks1 << endl;
        cout<<  " Marks in english = " << marks2 << endl;

    }

};
int main (){
    marks s1;
    int m1 , m2 ;
    cout << "enter the marks in maths : ";
    cin >> m1;
    cout << "enter the marks in english : ";
    cin >> m2;
    int total = s1.enter_marks( m1, m2);
    s1.display_marks();
    cout << "total marks is : " << total;
    
    return 0;
}