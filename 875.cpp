// Koko Eating Bananas
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalTime(vector<int>& piles, int t){
        int num=0;
        for(auto a: piles){
            num+=(a/t);
            if(a%t!=0)num+=1;
        }
        return num;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1,j=0, mid, ans;
        for(auto a:piles){
            j=max(a, j);
        }
        ans=j;
        while(i<j){
            mid=(i+j)/2;
            int val = totalTime(piles, mid);
            if(val<=h) j=mid;
            else i=mid+1;
            if(val==h) ans=min(ans, mid);
        }
        return min(ans, i);
    }
};