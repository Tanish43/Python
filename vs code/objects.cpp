#include <iostream>
using namespace std;

class car{
    private:
    int price;
    float mileage;

    public:
    void getdata(){
        cout << "enter the price of the car \n";
        cin >> price ;
        cout << "enter the mileage of the car \n";
        cin >> mileage ;
    }
    void display_data(){
        cout << "price = " << price;
        cout << "\n mileage = " << mileage;
    }
};

int main (){
    car c1;
    c1.getdata();
    c1.display_data();

    return 0;
}
