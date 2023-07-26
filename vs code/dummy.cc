
#include <iostream>
using namespace std;

class A
{
public:
  A ()
  {
    cout << "Constructor of A class is called" << endl;
  }
  void show ()
  {

    cout << "Implementing containership in c++" << endl;
  }

  ~A ()
  {
    cout << "Destructor of A called" << endl;
  }
};

class B
{

  A a;				//Containership
public:
    B ()
  {
    a.show ();
    cout << "Constructor of B class is called" << endl;
  }


   ~B ()
  {
    cout << "Destructor of B called" << endl;
  }
};

class C:public A, public B
{				//MULTIPLE INHERITANCE

public:
  C ()
  {
    cout << "Constructor of C is called" << endl;
  }

};

class D:public C
{				//multilevel inheritance

public:
  D ()
  {
    cout << "Constructor of D is called" << endl;
  }
};

class E:public A, public C
{				//HYBRID INHERITANCE

public:
  E ()
  {
    cout << "Constructor of E is called" << endl;
  }
};

int
main ()
{

  A a1;
  B b;
  C c;
  E e;
  return 0;
}
