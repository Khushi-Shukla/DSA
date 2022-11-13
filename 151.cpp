// Reverse Words in a String
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int j=0, n=s.length();
        while(s[j]==' ' && j<s.length())
            j++;
        string str;
        int i;
        for(i=j;i<n;i++){
            str="";
            while(s[i]==' ' && i<n)
                i++;
            while(s[i]!=' ' && i<n){
                str+=s[i];
                i++;
            }
            st.push(str);
            
        }
        str="";
        while(!st.empty()){
            str+=st.top()+" ";
            st.pop();
        }
        cout<<"-"<<str<<"-"<<endl;
        if(str[0]==' ')        
        return str.substr(1, str.length()-2);
        else
            return str.substr(0, str.length()-1);

    }
};

int main(){
    Solution s;
    cout<<s.reverseWords("the sky is blue");
}