// Remove Stones to Minimize the 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int idx = piles.size()-1;
        priority_queue<int> pq;
        for(auto a: piles){
            pq.push(a);
        }
        while(k--){
            // int idx = findMax(piles);
         //   sort(piles.begin(), piles.end());
            int temp = pq.top();
            pq.pop();
            int t = temp - (temp/2);
            pq.push(t);
        }
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};