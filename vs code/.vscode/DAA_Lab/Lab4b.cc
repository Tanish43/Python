#include <iostream>
using namespace std;

const int N = 3;

void rotateMatrix(int mat[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N/2; j++) {
            swap(mat[i][j], mat[i][N-j-1]);
        }
    }
}

void printMatrix(int mat[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Enter element (" << i << "," << j << "): ";
            cin >> mat[i][j];
        }
    }
    
    cout << "Original matrix:" << endl;
    printMatrix(mat);
    
    rotateMatrix(mat);
    
    cout << "Rotated matrix (90 degrees):" << endl;
    printMatrix(mat);
    
    return 0;
}
