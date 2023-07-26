#include <iostream>
using namespace std;

int main(){
    char *ptrl; //declaring the character pointer ptrl

    cout<<sizeof(ptrl)<<" "<<sizeof(*ptrl)<<endl; 
    /* ptrl represents the address which is of size 4(int) and *ptrl represents the value to 
       which ptrl is pointing which is of size 1(char) */
    
    // &(ampercent) - it represents the address of a variable.

    int num;
    int *addr = &num; 
    /*{int *addr;
    addr = &num;} we can break above line into these two line*/
    num = 10;
    cout<<addr<<" "<<*addr; // by printing *addr, we mean to print the value to which addr is pointing
    printf("\nThe value of the address of num is : %u in decimal and %p in hexadecimal",num,num);
    *addr = *addr + 1; // in this line writing *addr means dereferencing the pointer addr.
    cout<<"\nthe value of num is : "<< num;
    //mainupulating the content of num varialble using pointers.
    //remember the int pointers can point only int value...it can't point any other data_type variable. 


    return 0;
}