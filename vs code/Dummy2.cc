#include <iostream>
using namespace std;
class room {
    private:
    double length;
    double breadth;
    double height;
    public:
    room(){  //default
        length = 10;
        breadth = 12.5;
        height = 7;
        // cout<<"default constructor is working "<<endl;
    }
    room(double len,double brdh, double hgt) { //parameterized
        length = len;
        breadth = brdh;
        height = hgt;
    }
    room(room &obj) {   // copy
        length = obj.length;
        breadth = obj.breadth;
        height = obj.height;
    }
    room(float len){   //  overloading
        length=len;
        breadth = 20;
        height = 30;
    }
    double calculateVolume() {  
 
        return length*breadth*height;
    }
};
int main() {
    room room0;
    cout<<"Area of room 0 by default is: "<<room0.calculateVolume()<<endl;
    room room1(8, 12.5, 6.5);
    cout << "Area of room 1 by parameterized: " << room1.calculateVolume() << endl;
    room room2 = room1;
    cout << "Area of room 2 by copy: " << room2.calculateVolume();
    room room3(10);
    cout<<"Area of room 3 by overloading : " << room3.calculateVolume();
    
}