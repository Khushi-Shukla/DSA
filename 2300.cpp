// Successful Pairs of Spells and Potions2
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        vector<int> ans(n);
        sort(potions.begin(), potions.end());
        for(int i=0;i<n;i++){
            int l=0,r=potions.size()-1, mid;
            while(l<=r){
                mid=l+(r-l)/2;
                if((long long int)spells[i]*(long long int)potions[mid]>=success){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            ans[i]=potions.size()-r-1;
        }
        return ans;
    }
};