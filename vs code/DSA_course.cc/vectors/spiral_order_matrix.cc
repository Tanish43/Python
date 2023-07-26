#include <iostream>
#include <vector>
using namespace std;

class solution{
    public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        vector<int> ans;
        int m = matrix.size();
        if(m==0) return ans;
        int n = matrix[0].size();
        if(n==0) return ans;
        int sr = 0, er = m-1, sc = 0, ec = n-1;
        int count = 0;
        while( sr<=er && sc<=ec){
            for(int i=sc; i<=ec;i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            if(count == m*n){
            return ans;
        }
            for(int i =sr; i<=er;i++ ){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            if(count == m*n){
            return ans;
        }
            for(int i = ec; i>=sc;i--){
                ans.push_back(matrix[er][i]);
            }
            er--;
            if(count == m*n){
            return ans;
        }
            for(int i = er;i>=sr;i--){
                ans.push_back(matrix[i][ec]);
                count++;
            }    
            sc++;
            if(count == m*n){
            return ans;
            }
        }
    return ans;  
    }
};

vector<vector<int>> get_data(int r, int c){
    vector<vector<int>> mat;
    int ele = 0;
        cout <<"\n Enter the elements of your matrix";
        for (int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> ele;
                mat[i].push_back(ele);
            }
        }
        
        return mat;
    }
void print1(vector<vector<int>> mat){
    int r = mat.size();
    int c = mat[0].size();
        for (int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cout << mat[i].at(j)<<" ";
                mat[i].pop_back();
            }
            cout<<endl;
        }
    }
void print2(vector<int> mat){
    int n = mat.size();
        for (int i = 0; i < n; i++){
                cout << mat.at(i)<<" ";
                mat.pop_back();
        }
}
int main(){
    int R,C;
    solution s;
    cout<<"\nEnter the number of rows and column in your matrix";
    cin>>R>>C;
    vector<vector<int>> matrix = get_data(R,C);
    vector<int> Matrix =s.spiralOrder(matrix);
    print1(matrix);
    print2(Matrix);
    return 0;
}
    