#include <iostream>
using namespace std;

class vegetables;
class fruits{
    int apple, banana;
    public:
    fruits(int a, int b){
        apple = a;
        banana = b;
    }
    friend int total_items(fruits,vegetables);
    friend int total_price(fruits,vegetables);
};
class vegetables{
    int potato, brinjal;
    public:
    vegetables(int p,int br){
        potato = p;
        brinjal = br;
    }
    friend int total_items(fruits,vegetables);
    friend int total_price(fruits,vegetables);
};
int total_items(fruits fr, vegetables ve){
    int total_vegetables = fr.apple + fr.banana;
    int total_fruits = ve.potato + ve.brinjal;
    return total_vegetables + total_fruits;
}
int total_price(fruits fr, vegetables ve){
    return fr.apple*60 + fr.banana*30 + ve.potato*15 + ve.brinjal*25;
}
int main (){
    int apple, banana;
    int potato, brinjal;
    cout <<"enter the total no.of apple and banana";
    cin >> apple >> banana;
    fruits fru(apple,banana);
    cout <<"enter total no. of potato and brinjal";
    cin >> potato >> brinjal;
    vegetables veg (potato,brinjal);
    int total_food = total_items(fru,veg);
    cout << "total items in your bag is" << total_food <<"kg" << endl;
    int price = total_price(fru, veg);
    cout << "your total expenses is : " << price <<"Rs";
    
    return 0;
}