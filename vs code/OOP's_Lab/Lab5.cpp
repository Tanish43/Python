#include <iostream>
using namespace std;

class ACCOUNT{
    double money;
    double interest = 3.5;

    public:
    ACCOUNT( double m){
        money = m;
    }
    void deposit_money(){
        double add;
        cout <<"\n Enter the amount of money you want to deposit : ";
        cin >> add;
        money = add + money;
    }
    void current_status(){
        cout<<"\n Your current bank balance is : "<< money;
    }
    void withdrawl(){
        double sub;
        cout <<"\n Enter the amount of money you want to withdrawl : ";
        cin >> sub;
        if (money < sub){
            cout<<"\n Insufficient Balance";
        }
        money =  money - sub;    }
   
    void interest_rate(){
        double principal = money, time, si;
        //Interest Rate = (Simple Interest × 100)/(Principal × Time).
        cout <<"Enter the duration of your loan ";
        cin >> time;
        si = (principal * time * interest)/100;
        money = money + si;
        cout <<"\n Simple interest will be : "<< si <<"and the total amount = " << money;
    }

};
int main(){
    double curr;
    cout<<"\n Enter the current money in your bank account";
    cin >> curr;
    ACCOUNT a1(curr);
    int k;
    for (int i= 1; k != 0; i++){
    cout<<" \n Press 1 to withdrawl money, 2 to deposit money, 3 to show interest gain on your money, 4 to show current status and 0 to exit";
    cin >>k;
    switch (k)
    {
    case 1 : a1.withdrawl();
        break;
    case 2 : a1.deposit_money();
        break;
    case 3: a1.interest_rate();
       break;
    case 4 : a1.current_status();
       break;
    case 0:
       break;

    
    default:
    cout<<"\n Enter the valid option";
        
    }
    }

}