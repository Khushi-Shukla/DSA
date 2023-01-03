// Delete Columns to Make Sorted
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int col=0;
        int minval=97;
        for(int i=0;i<strs[0].size();i++){
            minval=int(strs[0][i]);
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]<minval){
                    cout<<strs[j][i]<<" ";
                    col++;
                    break;
                }
                minval = int(strs[j][i]);
            }
        }
        return col;
    }
};