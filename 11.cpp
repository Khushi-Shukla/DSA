// Container With Most Water
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0, j=n-1;
        int area=0;
        while(i<j && j>=0){
            // cout<<height[i]<<" "<<height[j]<<"\n";
            int temp = min(height[i], height[j]);
            // cout<<temp<<endl;
            temp = temp*(j-i);
            area=max(area, temp);
            if(height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};