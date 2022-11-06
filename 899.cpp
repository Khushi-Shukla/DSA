// Orderly Queue
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.size();
        string minans=s;

        if(k>1){
            sort(s.begin(), s.end()); return s;
        }
        
        for(int i=0;i<n;i++){
            char maxch=s[0];
            int j;
            for(j=0;j<n-1;j++){
                s[j]=s[j+1];
            }
            
            if(j+1==n){
                s[j]=maxch;
            }
            
            if(minans>s){
                minans=s;
            }
            
        }
        return minans;
    }
};


int main(){
    Solution s;
    cout<<s.orderlyQueue("cba", 1);
}