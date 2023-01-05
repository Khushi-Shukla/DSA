// Minimum Number of Arrows to Burst Balloons
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count = 1;
        sort(points.begin(), points.end());
        int end = points[0][1];
        for(int i=1;i<points.size();i++){
            if(end<points[i][0]){
                count++;
                end=points[i][1];
            }
            end = min(end, points[i][1]);
        }
        return count;
    }
};

// [1,10][3,9][4,11][6,9][6,7][8,12][9,12]

// [[1,6],[2,8],[7,12],[10,16]]
// [0,1][2,]
// end =6
// 6<2 || 6>8
// if end>=2 && end<=8 then nothing else count++ end = 8