//Minimum Genetic Mutation
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPresent(string str, vector<string> bank){
        for(int i=0;i<bank.size();i++){
            if(bank[i]==str)
                return true;
        }
        return false;
    }
    int diff(string s1, string s2){
        if(s1.size()!=s2.size()) return 0;
        int count=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
                count++;
        }
        return count==1;
    }
    int minMutation(string start, string end, vector<string>& bank) {
       
        if(!isPresent(end, bank))
            return -1;
        
        map<string, vector<string>> adj;
        int n=bank.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(diff(bank[i], bank[j])){
                    adj[bank[i]].push_back(bank[j]);
                    adj[bank[j]].push_back(bank[i]);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(diff(start, bank[i])){
                adj[bank[i]].push_back(start);
                adj[start].push_back(bank[i]);
            }
        }
        
        queue<string> q;
        q.push(start);
        set<string> s;
        s.insert(start);
        int count=0;
        
        while(!q.empty()){
            int m=q.size();
           
            while(m--){
                string str=q.front();
                q.pop();
                for(auto a:adj[str]){
                    if(s.count(a)==0){
                        s.insert(a);
                        q.push(a);
                    }
                }
            }           
            count++;
            if(s.count(end))
                return count;
            
        }
        
        
        return -1;
        
    }
};

int main(){
    Solution s;
    vector<string> c={"AACCGGTA"};
    cout<<s.minMutation("AACCGGTT", "AACCGGTA", c);
}