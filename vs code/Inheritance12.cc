#include <iostream>
using namespace std;

/*Program to demonstrate the concept of destructor, multiple inheritance, multilevel inheritance, hybrid
inheritance, and concept of containership.*/

class A{
    int Aa, Ab;
    public:
     void set_dataA(int x, int y){
        Aa = x;
        Ab = y;
     }
     void display_dataA(){
        cout <<"\nElements of A are : "<< Aa << Ab;
     }
     ~A(){
        cout << "\n this is the destrucor of A"<< endl;
     }
}; 
class B : public A{ // Single inheritance
    int Ba, Bb;
    public :
     void set_dataB(int x, int y){
        Ba = x;
        Bb = y;
     }
     void display_dataB(){
        cout <<"\nElements of B are : "<< Ba << Bb;
     }
     ~B(){
        cout << "\n this is the destrucor of B" << endl;
     }
}; 
class C : public B{ //Multi-level inheritance
    int Ca, Cb;
    public :
     void set_dataC(int x, int y){
        Ca = x;
        Cb = y;
     }
     void display_dataC(){
        cout <<"\nElements of C are : "<< Ca << Cb;
     }
     ~C(){
        cout << "\n this is the destrucor of C"<< endl;
     }
}; 
class D : public A, public B{ //Multiple inheritance
    int Da, Db;
    public :
     void set_dataD(int x, int y){
        Da = x;
        Db = y;
     }
     void display_dataD(){
        cout <<"\n Elements of D are : "<< Da << Db;
     }
     ~D(){
        cout << "\n this is the destrucor of D"<< endl;
     }
}; 
class E : public D{ //Hierarchial inheritance
    int Ea, Eb;
    public :
     void set_dataE(int x, int y){
        Ea = x;
        Eb = y;
     }
     void display_dataE(){
        cout <<"\nElements of E are : "<< Ea << Eb;
     }
     ~E(){
        cout << "\n this is the destrucor of E"<< endl;
     }
}; 
class F : public A, public E, public D{ //Hybird inheritance
    int Fa, Fb;
    public :
     void set_dataF(int x, int y){
        Fa = x;
        Fb = y;
     }
     void display_dataF(){
        cout <<"\nElements of F are : "<< Fa << Fb;
     }
     ~F(){
        cout << " \nthis is the destrucor of F"<< endl;
     }
}; 

int main (){
    int num1, num2;
    cout << "Enter any two numbers : ";
    cin >> num1 >> num2;
    cout << endl;
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
    a.set_dataA(num1 , num2);
    b.set_dataB(num1 , num2);
    c.set_dataC(num1 , num2);
    d.set_dataD(num1 , num2);
    e.set_dataE(num1 , num2);
    f.set_dataF(num1 , num2);
    a.display_dataA();

    return 0;
}