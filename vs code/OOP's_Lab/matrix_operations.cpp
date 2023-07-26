#include  <iostream>
using namespace std;

int row, column;
class Matrix{

    private: int mat1[100][100];

    public: 
    Matrix(){
        mat1[0][0] = 0;
    }
    Matrix(int r, int c){
        cout <<"\n Enter the elements of your matrix";
        for (int i = 0; i < c; i++){
            for(int j = 0; j < r; j++){
                cin >> mat1[i][j];
            }
        }
    }
    void diplay_data(){
        cout <<"\n your matrix is : "<<endl;
        for (int i = 0; i < column; i++){
            for(int j = 0; j < row; j++){
                cout << mat1[i][j] <<" ";
            }
            cout<<endl;
        } 
        
    }  
    Matrix operator +(Matrix m){
        Matrix temp;
        for(int i = 0; i< column; i++){
            for (int j = 0; j < row; j++){
            temp.mat1[i][j] = mat1[i][j] + m.mat1[i][j];
            }
        }
        return temp;
    }    
    Matrix operator *(Matrix m){
        Matrix temp(0,0);
        for(int i = 0; i< column; i++){
            for (int j = 0; j < row; j++){
                for(int k =0; k<row; k++){
                    temp.mat1[i][j] = temp.mat1[i][j] +(mat1[i][k] * m.mat1[k][i]);
                }
            }
        }
        return temp;
  
    }  
};

int main(){
    cout << "Enter the rows and columns of the matix : ";
    cin >> row>> column;
    Matrix m1(row,column);
    m1.diplay_data();
    Matrix m2(row,column);
    m2.diplay_data();
    Matrix m3 = m1+ m2;
    cout <<"\n After addition ";
    m3.diplay_data();
    if(row == column){
    Matrix m4 = m1 * m2;
    cout <<"\n After Multiplication ";
    m4.diplay_data();}
    else{
        cout<<"\n The matrix multiplication is possible for square matrix only ";
    }
    
    return 0;

}