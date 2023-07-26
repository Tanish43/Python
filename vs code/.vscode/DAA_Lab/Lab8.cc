#include<iostream>
#include<vector>
using namespace std; 
long count_swap(string s){ 
    vector<int> pos; 
    for (int i = 0; i < s.length(); ++i) 
        if (s[i] == '[') {
            pos.push_back(i); 
        }
    int total = 0; // total '[' 
    int a = 0;  // To track position of next '[' in pos 
    long sum = 0; // To store result
    for (int i = 0; i < s.length(); ++i) { 
        if (s[i] == '[') { 
            ++total; 
            ++a; 
        } 
        else if (s[i] == ']'){
            --total;
        } 
        if (total < 0) { 
            sum += pos[a] - i; 
            swap(s[i], s[pos[a]]); 
            ++a; 

            total = 1; 
        } 
    } 
    return sum; 
} 
int main(){ 

    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;
    int num_swaps = count_swap(s);
    cout << "Minimum number of swaps needed to balance the string: " << num_swaps << endl;
    return 0; 
}