// First Missing Positive
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto a:nums){
            if(a>0)
                pq.push(a);
        }
        int num=1;
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            if(a==num){
                num++;
            }
        }
        return num;
    }
};