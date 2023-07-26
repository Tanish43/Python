#include<iostream>
using namespace std;

void read(float *b, float *h);
void calculate_area (float *b, float *h, float *a);

int main(){
    
    float base, height, area; 
    read(&base, &height);
    calculate_area(&base, &height, &area); 
    cout<<"\n Area of the triangle with base "<<base<<" and height "<<height<<" = "<<area;

    return 0;
}

void read(float *b, float *h){

    cout<<"\n Enter the base and height of the triangle: "; 
    cin >> *b;
    cin >> *h;
}

void calculate_area (float *b, float *h, float *a){

*a = 0.5*((*b)*(*h));
}