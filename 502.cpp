// IPO
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.first == b.first)return a.second > b.second;
        return a.first < b.first;
    }
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> v;
        for(int i=0;i<profits.size();i++){
            v.push_back({capital[i], profits[i]});
        }
        sort(begin(v), end(v), comp);
        
        int i=0,profit=w;
        priority_queue<int> pq;
        while(k-->0){
            while(w>=v[i].first && i<v.size()){
                pq.push(v[i].second);
                i++;
            }
            if(pq.empty()) break;

            profit+=pq.top();
            w+=pq.top();
            pq.pop();
        }
        return profit;

    }
};