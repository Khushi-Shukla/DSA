// Break a Palindrome
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        if(n==1)
            return "";
        char ch='a';
        int i=0,j=n-1;
        if(palindrome[0]!='a'){
            palindrome[0]='a';
            return palindrome;
        }
        bool isequal=true;
        for(i=1;i<n;i++){
            if(palindrome[i-1]!=palindrome[i]){
                isequal=false;
                break;
            }       
        }
        if(isequal){
            if(palindrome[0]=='a'){
                palindrome[n-1]='b';
            }
            else{
                 palindrome[0]='a';
            }
            return palindrome;
        }
        string s=palindrome;
        for(i=0;i<n;i++){
            string str=palindrome;
            for(j=0;j<n;j++){
                if(palindrome[j]>ch && j!=n/2){
                    palindrome[j]=ch;
                    break;
                }
            }
            if(palindrome==str){
                ch++;
            }
            else
                break;           
        }
        if(s==palindrome){
            palindrome[n-1]='b';
        }
        return palindrome;
        

    }
};

int main(){
    Solution s;
    cout<<s.breakPalindrome("abbba");
}