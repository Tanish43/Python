#include <iostream>
using namespace std;

class student{
    private:
    int marks;
    int roll_no;
    public:
    student(){
        cout << "this the student recorder" <<endl;
    }
    ~student(){
        cout<< "the student data is distructed "<< endl;
    }

};
int main(){
    student s1;
    student s2;
    return 0;
}
