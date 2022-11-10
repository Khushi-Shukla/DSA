//Remove All Adjacent Duplicates In String
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        if(s.length()==1)
            return s;
        for(int i=1;i<s.length();i++){
            if(!st.empty() && st.top()==s[i])
                st.pop();
            else
                st.push(s[i]);
        }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
int main(){
    Solution s;
    cout<<s.removeDuplicates("abbaca")<<endl;
    return 0;
}