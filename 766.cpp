// Toeplitz Matrix
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int size=matrix.size();
        if(size<1) return true;
        int a=matrix[0][0];
        for(int i=0;i<matrix.size();i++){
            int b=matrix[i][0];
            int c=i;
            for(int j=0;j<matrix[i].size();j++){
                if(i==j && matrix[i][j]!=a)
                    return false;
                else if(i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j])
                    return false;
            }
            
        }
        return true;
        
    }
};
int main(){
    vector<vector<int>> v={{1,2,3},{5,1,2},{9,5,1}};
    Solution s;
    cout<<s.isToeplitzMatrix(v);
    return 0;
}