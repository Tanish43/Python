class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        if(n == 0){
            return s;
        }
        stack<string> rev;
        string ans;
        int start = 0, end = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == ' '){
                end = i;
                string r = s.substr(start, end - start);
                rev.push(r);
                start = ++end;
            }
        } 
        end = n;
        string r = s.substr(start, end - start);
        rev.push(r);
        while(!rev.empty()){
            if(!ans.empty()){
                ans += " ";
            }
            ans += rev.top();
            rev.pop();
        }
        return ans;
    }
};