class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
            }
            else {
                if(st.empty())
                {
                    return false;
                }
                if(s[i]==')' && st.top()=='(')
                {
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='[')
                {
                    st.pop();
                }
                else if(s[i]=='}' && st.top()=='{')
                {
                    st.pop();
                }
                else return false;
            }
        }
        return st.empty();
    }
};
