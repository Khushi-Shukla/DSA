// Minimum Rounds to Complete All Tasks
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> mp;
        for(auto a:tasks){
            mp[a]++;
        }
        int count=0;
        for(auto val:mp){
            if(val.second==1) return -1;
            int c = ceil(val.second/3.0);
            // cout<<val.second<<" "<<c<<"\n";
            count+=c;
            //val.second-=c;
        }
        return count;
    }
};