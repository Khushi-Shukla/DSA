// Rotate Image
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int i,j;
        for(i=0;i<n;i++){
            for(j=i;j<matrix[i].size();j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};