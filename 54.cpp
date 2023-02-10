// Spiral Matrix
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left=0, top=0, down=matrix.size()-1, right=matrix[0].size()-1, dir=0, i;
        vector<int> res;
        while(left<=right && top<=down){
            if(dir==0){
                for(i=left;i<=right;i++){
                    res.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==1){
                for(i=top;i<=down;i++)
                    res.push_back(matrix[i][right]);
                right--;
            }
            else if(dir==2){
                for(i=right;i>=left;i--)
                    res.push_back(matrix[down][i]);
                down--;
            }
            else if(dir==3){
                for(i=down;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return res;
    }
};