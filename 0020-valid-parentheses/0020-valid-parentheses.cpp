class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
                continue;
            }
            if(st.empty()){
                return false;
            }
            char top=st.top();
            st.pop();
            if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{') || (s[i]==']' && top=='[')){
                continue;
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};