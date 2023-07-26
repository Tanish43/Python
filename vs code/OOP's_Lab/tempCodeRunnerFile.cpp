
#include <iostream>
using namespace std;
int main()
{
    float num[2];
    char op;
    cout<<"Enter num1 : ";
    cin>>num[0];
    cout<<"\nEnter num2 : ";
    cin>>num[1];
    cout<<"\nEnter the operation : ";
    cin>>op;

    switch(op)
  {
    case ('+') :
        cout<<"\n num1 "<<op<<" num2 = "<<num[0] + num[1]<<endl;
        break;

    case ('-'):
        cout<<"\n num1 "<<op<<" num2 = "<<num[0] - num[1]<<endl;
        break;

    case ('*'):
        cout<<"\n num1 "<<op<<" num2 = "<<num[0] * num[1]<<endl;
        break;

    case ('/'):
        cout<<"\n num1 "<<op<<" num2 = "<<num[0] / num[1]<<endl;
        break;

    case ('%'):
    cout<<"\n num1 "<<op<<" num2 = "<< (int) num[0] %  (int) num[1]<<endl;
    break;

    default:
    cout<<"\n Enter the valid operation"<<endl;
    break;
  }
    return 0;
}
