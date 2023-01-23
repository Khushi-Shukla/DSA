// Find the Town Judge
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //sort(trust.begin(), trust.end());
        unordered_map<int, bool> mp1;
        map<pair<int, int>, bool> mp2;

        for(auto a: trust){
            if(!mp1[a[0]])
                mp1[a[0]]=true;
                mp2[{a[0],a[1]}]=true;
        }
        int judge;
        for(int i=1;i<=n;i++){
            if(mp1[i]==false){
                judge=i;
                break;
            }
        }
        for(int i=1;i<=n;i++){
            if(i!=judge){
                if(mp2[{i, judge}]==false)
                    return -1;
            }
        }
        // cout<<judge;
        return judge;


    }
};