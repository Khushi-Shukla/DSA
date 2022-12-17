// Evaluate Reverse Polish Notation
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="/" || tokens[i]=="*"){
                long int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(tokens[i]=="*"){
                    st.push(a*b);
                    cout<<a*b<<" ";
                }
                else if(tokens[i]=="/"){
                    st.push(a/b);
                    cout<<a/b<<" ";
                }
                else if(tokens[i]=="+"){
                    st.push(a+b);
                    cout<<a+b<<" ";
                }
                else if(tokens[i]=="-"){
                    st.push(a-b);
                    cout<<a-b<<" ";
                }
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
    
};
// 42 43 45 47