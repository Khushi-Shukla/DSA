//  Insert Interval
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int end=intervals[0][1];
        int start=intervals[0][0];
        vector<vector<int>> ans;
        ans.push_back({start,end});
        int idx=0;

        for(int i=1;i<intervals.size();i++){
            if(end>=intervals[i][0]){
                ans[idx][0]=min(start, intervals[i][0]);
                ans[idx][1]=max(end, intervals[i][1]);
                start=ans[idx][0];
                end = ans[idx][1];
            }
            else{
                ans.push_back({intervals[i][0], intervals[i][1]});
                start = intervals[i][0];
                end = intervals[i][1];
                idx++;
            }
           
        }
        return ans;
    }
};