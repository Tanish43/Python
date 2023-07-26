#include <iostream>
using namespace std;

class rectangle
{
private:
 int length, bredth;   
public:
    rectangle(){
        length= 4;
        bredth= 5;
        cout << "\n ******* this is default constructor *******"<< endl;
        int area = length * bredth;
        cout << "\n Area of the rectangle is : " << area ;

    }

    rectangle(int x,int y){
        length = x;
        bredth = y;
        cout << "\n ******* this is parameterized constructor *******"<< endl;
        int area = length * bredth;
        cout << "\n Area of the rectangle is : " << area ;

    }
    rectangle(rectangle &x){
        length = x.length;
        bredth = x.bredth;
        cout <<"\n ******* this is copy constructor *******"<< endl;
                int area = length * bredth;
        cout << "\n Area of the rectangle is : " << area ;


    }
    ~rectangle(){
        cout <<"\n This is a destructor "<<endl;
    }
};
int main (){
    rectangle r1;
    rectangle r2(4,5);
    rectangle r3(r2);

    return 0;
}