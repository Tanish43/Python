#include  <iostream>
using namespace std;

int row, column;
    
class Matrix{

    private: int mat1[100][100] ,mat[100][100] ;

    public: 
    void get_data(int r, int c){
        cout <<"\n Enter the elements of your matrix";
        for (int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> mat1[i][j];
            }
        }
    }
    void diplay_data(){
        cout <<"your matrix 1 is : "<<endl;
        for (int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                cout << mat1[i][j] <<" ";
            }
        } 
        
    }           
    int multiplication_matix(Matrix M1, Matrix M2){
        cout <<"\n Matrix after multiplication" <<endl;
        for (int i = 0; i < row; i++){
            int matrix, mat = 0;
            for(int j = 0; j < column; j++){
                
                matrix = M1.mat1[i][j] * M2.mat1[j][i];
                mat[i][j] += matrix;
            }
        
            cout << mat[i][j] <<" ";
        }

        return mat;
    }

};

int main(){
    cout << "Enter the size of your both the matix : ";
    cin >> row >> column;
    Matrix m1, m2;
    m1.get_data(row, column);
    m1.diplay_data();
    m2.get_data(row, column);
    m2.diplay_data();
    return 0;

}