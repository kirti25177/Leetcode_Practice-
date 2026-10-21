class Solution {
public:
    void reverseString(vector<char>& s) {
        //This is using stack It will take the time complexity of O(n)
        stack<char>st;
        string ans="";
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        int i=0;
        while(!st.empty()){
            s[i]=st.top();
            st.pop();
            i++;
        }
        cout<< ans;
    }
};