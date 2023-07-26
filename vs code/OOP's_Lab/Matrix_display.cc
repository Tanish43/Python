#include  <iostream>
using namespace std;

int row, column;
    
class Matrix{

    private: int mat1[100][100];

    public: 
    void get_data(int r, int c){
        cout <<"\n Enter the elements of your matrix";
        for (int i = 0; i < c; i++){
            for(int j = 0; j < r; j++){
                cin >> mat1[i][j];
            }
        }
    }
    void diplay_data(){
        cout <<"your matrix 1 is : "<<endl;
        for (int i = 0; i < column; i++){
            for(int j = 0; j < row; j++){
                cout << mat1[i][j] <<" ";
            }
            cout<<endl;
        } 
        
    }        
};

int main(){
    cout << "Enter the rows and columns of the matix : ";
    cin >> row >> column;
    Matrix m1;
    m1.get_data(row, column);
    m1.diplay_data();
    return 0;

}