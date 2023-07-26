/*#include <iostream>
using namespace std;

template<typename T>
class Pair{
    private:
    T x, y;

    public:
    void setx(T x){
        this->x = x;
    }
    T getx(){
        return x;
    }
    void sety(T y){
        this->y = y;
    }
    T gety(){
        return y;
    }
    

};
int main(){
    Pair<int> p1;
    p1.setx(1);
    p1.sety(2);
    cout<<p1.getx()<<" "<<p1.gety()<<endl;

    Pair<double> p2;
    p2.setx(1.71);
    p2.sety(2.03);
    cout<<p2.getx()<<" "<<p2.gety();

    return 0;
} */
#include <iostream>
using namespace std;

template<typename T,typename V>
class Pair{
    private:
    T x;
    V y;

    public:
    void setx(T x){
        this->x = x;
    }
    T getx(){
        return x;
    }
    void sety(V y){
        this->y = y;
    }
    V gety(){
        return y;
    }
    

};
int main(){
    Pair<int,double> p1;
    p1.setx(1.17);
    p1.sety(1.17);
    cout<<p1.getx()<<" "<<p1.gety()<<endl;

    pair<pair<int,int>, int> P1;
    pair<int, int> temp;
    P1.sety(30);
    temp.setx(10);
    temp.sety(20);
    cout<<endl;
    cout<<P1.getx().getx()<<" "<<P1.getx().gety()<<" "<<P1.gety();

    /*Pair<double> p2;
    p2.setx(1.71);
    p2.sety(2.03);
    cout<<p2.getx()<<" "<<p2.gety(); */

    return 0;
}