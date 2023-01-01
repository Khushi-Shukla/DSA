// Spiral Matrix II
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int top=0, down=n-1, right=n-1, left=0, num=1, dir=0;
        while(top<=down && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    ans[top][i]=num;
                    num++;
                }
                top++;
            }
            else if(dir==1){
                for(int i=top;i<=down;i++){
                    ans[i][right]=num;
                    num++;
                }
                right--;
            }
           else if(dir==2){
                for(int i=right;i>=left;i--){
                    ans[down][i]=num;
                    num++;
                }
                down--;
            }
           else {
                for(int i=down;i>=top;i--){
                    ans[i][left]=num;
                    num++;
                }
                left++;
            }
            
            dir=(dir+1)%4;
            
        }
        return ans;
    }
};