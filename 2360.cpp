// Longest Cycle in a Graph
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int ans=-1;
    void getcycle(vector<int>& store, vector<int>& edges, int e, vector<bool>& visit){
        if(e==-1) return;
        if(visit[e]==true){
            int count=-1;
            for(int i=0;i<store.size();i++){
                if(store[i]==e){
                    count=i;
                    break;
                }
            }
            if(count==-1) return;
            int len = (store.size()-count);
            ans=max(ans, len);
            return;
        }
        visit[e] = true;
        store.push_back(e);
        getcycle(store, edges, edges[e], visit);
        return;
    }

    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<bool> visited(n,false);

        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            vector<int> store;
            getcycle(store, edges, edges[i], visited);
        }
        
        return ans;
    }
};