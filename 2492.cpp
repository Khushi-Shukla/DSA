// Minimum Score of a Path Between Two Cities
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> v[n+1];
        for(auto a:roads){
            v[a[0]].push_back({a[1], a[2]});
            v[a[1]].push_back({a[0], a[2]});
        }
        vector<int> vis(n+1, 0);
        vis[1]=1;
        queue<int> q;
        q.push(1);
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(auto it: v[t]){
                if(vis[it.first]==0){
                    vis[it.first]=1;
                    q.push(it.first);
                }
            }
            
        }
        int ans = INT_MAX;
        for(int i=0;i<roads.size();i++){
            if(vis[roads[i][0]] && vis[roads[i][1]] && roads[i][2]<ans){
                ans= roads[i][2];
            }
        }
        return ans;
    }
};