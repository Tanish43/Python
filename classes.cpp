#include <iostream>
using namespace std;

class account
{
    private:
    int accno;
    string accname;
    string branch;
    float balance;
    int dob; 

    public:
    void display();
    void debit();
    void credit();
    void accdetails();
    void choice();
    void interest();
};

void account::accdetails()
{
    cout<<"Enter the bank account details: "<<endl;
    cout<<"A/C holder name: ";
    cin>>accname;
    cout<<"A/C no: ";
    cin>>accno;
    cout<<"Branch: ";
    cin>>branch;
    cout<<"Date of birth: ";
    cin>>dob;
    cout<<"Balance: ";
    cin>>balance;
}

void account::debit()
{
    float d;
    cout<<"Enter the amount to withdraw: ";
    cin>>d;
    if(balance==100)
    {
        cout<<"Insufficient balance"<<endl;
    }
    else if(balance>d)
    {
        cout<<"Successfully withdrawn"<<endl;
        balance=balance-d;
    }
    else 
    {
        cout<<"Insufficient balance"<<endl;
    }
}

void account::credit()
{
    float d;
    cout<<"Enter the amount to deposit: ";
    cin>>d;
    balance=balance+d;
    cout<<"Successfully deposited"<<endl;
}

void account::display()
{
    account::interest();
    cout<<"Bank account details: "<<endl;
    cout<<"A/C holder name: "<<accname<<endl;
    cout<<"A/C no: "<<accno<<endl;
    cout<<"Branch: "<<branch<<endl;
    cout<<"Date of birth: "<<dob<<endl;
    cout<<"Balance: "<<balance<<endl;
}
void account::choice()
{
    int n;
    for(int i=1;;i++)
    {
        cout<<endl;
        cout<<"1.Withdraw amount"<<endl;
        cout<<"2.Deposit amount"<<endl;
        cout<<"3.Display account details"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>n;
        if(n==1)
        {
            account::debit();
        }
        else if(n==2)
        {
            account::credit();
        }
        else if(n==3)
        {
            account::display();
        }
        else if(n==4)
        {
            cout<<"Thank you"<<endl;
            break;
        }
        else
        {
            cout<<"Enter a valid choice"<<endl;
        }
    }

}
void account::interest()
{
    int i;
    i=(1000*1*2)/100;
    balance=balance+i;
}
int main()
{
    account acc;
    acc.accdetails();
    acc.choice();
    
}