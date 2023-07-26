#include <iostream>
#include <vector>
using namespace std; 

vector<vector<int>> add(vector<vector<int>> A, vector<vector<int>> B) 
{ 
 vector<vector<int>> res; 
 for (int i = 0; i < A.size(); i++) 
 { 
 vector<int> row; 
 for (int j = 0; j < A.at(0).size(); j++) 
 { 
 int sum = A.at(i).at(j) + B.at(i).at(j); 
 row.push_back(sum); 
 } 
 res.push_back(row); 
 } 
 return res; 
} 

vector<vector<int>> sub(vector<vector<int>> A, vector<vector<int>> B) 
{ 
 vector<vector<int>> res; 
 for (int i = 0; i < A.size(); i++) 
 { 
 vector<int> row; 
 for (int j = 0; j < A.at(0).size(); j++) 
 { 
 int subtract = A.at(i).at(j) - B.at(i).at(j); 
 row.push_back(subtract); 
 } 
 res.push_back(row); 
 } 
 return res; 
} 



vector<vector<int>> Strassen(vector<vector<int>> A, vector<vector<int>> 
B) 
{ 
 // base case
 if (A.size() <= 1) // 1rows and 1 cols
 { 
 return {{A.at(0).at(0) * B.at(0).at(0)}}; 
 } 
 vector<vector<int>> a, b, c, d, e, f, g, h; // four for A and rest 
// four for B
 int mid = A.size() / 2; 
 // dividing A and B vector into a , e
 for (int i = 0; i < mid; i++) 
 { 
 vector<int> rowA, rowB; 
 for (int j = 0; j < mid; j++) 
 { 
 rowA.push_back(A.at(i).at(j)); 
 rowB.push_back(B.at(i).at(j)); 
 } 
 a.push_back(rowA); 
 e.push_back(rowB); 
 } 
 // filling b and f
 for (int i = 0; i < mid; i++) 
 { 
 vector<int> rowA, rowB; 
 for (int j = mid; j < 2 * mid; j++) 
 { 
 rowA.push_back(A.at(i).at(j)); 
 rowB.push_back(B.at(i).at(j)); 
 } 
 b.push_back(rowA); 
 f.push_back(rowB); 
 } 
 // filling c and g
 for (int i = mid; i < 2 * mid; i++) 
 { 
 vector<int> rowA, rowB; 
 for (int j = 0; j < mid; j++) 
 { 
 rowA.push_back(A.at(i).at(j)); 
 rowB.push_back(B.at(i).at(j)); 
 } 
 c.push_back(rowA); 
 g.push_back(rowB); 
 } 
 // filling d and h
 for (int i = mid; i < 2 * mid; i++) 
 { 
 vector<int> rowA, rowB; 
 for (int j = mid; j < 2 * mid; j++) 
 { 
 rowA.push_back(A.at(i).at(j)); 
 rowB.push_back(B.at(i).at(j)); 
 } 
 d.push_back(rowA); 
 h.push_back(rowB); 
 } 

 
 vector<vector<int>> p1, p2, p3, p4, p5, p6, p7; // storing value of 
//  P's
 p1 = Strassen(add(a, d), add(e, h)); 
 p2 = Strassen(add(c, d), e); 
 p3 = Strassen(a, sub(f, h)); 
 p4 = Strassen(d, sub(g, e)); 
 p5 = Strassen(add(a, b), h); 
 p6 = Strassen(sub(c, a), add(e, f)); 
 p7 = Strassen(sub(b, d), add(g, h)); 
 vector<vector<int>> c11, c12, c21, c22; // storing value of C's
 c11 = add(add(p1, p7), sub(p4, p5)); 
 c12 = add(p3, p5); 
 c21 = add(p2, p4); 
 c22 = add(sub(p1, p2), add(p3, p6)); 


 // write to C and return C create new vector//combine all C's
 vector<vector<int>> C; 
 int newsize = c11.size() * 2; 
 for (int i = 0; i < c11.size(); i++) 
 { 
 vector<int> row; 
 for (int j = 0; j < c11.size(); j++) 
 { 
 row.push_back(c11.at(i).at(j)); 
 } 
 for (int j = 0; j < c11.size(); j++) 
 { 
 row.push_back(c12.at(i).at(j)); 
 } 
 C.push_back(row); 
 } 
 for (int i = 0; i < c21.size(); i++) 
 { 
 vector<int> row; 
 for (int j = 0; j < c21.size(); j++) 
 { 
 row.push_back(c21.at(i).at(j)); 
 } 
 for (int j = 0; j < c22.size(); j++) 
 { 
 row.push_back(c22.at(i).at(j)); 
 } 
 C.push_back(row); 
 } 
 return C; 
} 


int main() 
{ 
 vector<vector<int>> matrix1 = { 
 {1, 1}, {1, 1}}; 
 vector<vector<int>> matrix2 = { 
 {2, 2}, {2, 2}}; 
 cout << "\nINPUT MATRIX 1 IS: " << endl; 
 for (auto &i : matrix1) 
 { 
 for (auto &j : i) 
 { 
 cout << j << " "; 
 } 
 cout << endl; 
 } 
 cout << "\nINPUT MATRIX 2 IS: " << endl; 
 for (auto &i : matrix2) 
 { 
 for (auto &j : i) 
 { 
 cout << j << " "; 
 } 
 cout << endl; 
 } 
 vector<vector<int>> res = Strassen(matrix1, matrix2); 
 cout << "\nRESULTANT MATRIX : \n"; 
 for (auto &i : res) 
 { 
 for (auto &j : i) 
 { 
 cout << j << " "; 
 } 
 cout << endl; 
 } 
 return 0; 
}