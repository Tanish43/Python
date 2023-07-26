/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


int prec(char ch) {

	 if (ch == '/' || ch == '*')
		return 2;
	else if (ch == '+' || ch == '-')
		return 1;
	else
		return -1;
}


string infixToPostfix(string s) {

	stack<char> st; 
	string ans = "";

	for (int i = 0; i < s.length(); i++) {
		char ch = s[i];

	
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
			ans += ch;   

		
		else if (ch == '(')
			st.push('(');

		
		else if (ch == ')') {
			while (st.top() != '(')
			{
				ans += st.top();    
				st.pop();
			}
			st.pop();
		}

		
		else {
			while (!st.empty() && prec(s[i]) <= prec(st.top())) {
				ans += st.top();
				st.pop();
			}
			st.push(ch);             
		}
	}


	while (!st.empty()) {
		ans += st.top();
		st.pop();
	}

	return ans;
}

int main() {
	string input;
	cin >> input;
	cout << infixToPostfix(input);
	return 0;
}
