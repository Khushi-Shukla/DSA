// Can Place Flowers
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int i=0,j=1;
        int n1=flowerbed.size();
        if(n1==1){
            if(flowerbed[0]==0){
                count++;
            }
            return count==n || n==0;
        }
        while(i<j && j<n1){
            if(i==0 && flowerbed[i]==0 && flowerbed[j]==0){
                flowerbed[i]=1;
                count++;
            }
            if(flowerbed[i]!=1 && j+1<n1 && flowerbed[j+1]!=1 && flowerbed[j]!=1){
                flowerbed[j]=1;
                count++;
            }
            if(j+1==n1 && flowerbed[i]!=1 && flowerbed[j]!=1){
                flowerbed[j]=1;
                count++;
            }
            if(count==n) return true;
            i++;
            j++;
        }
        return count==n || n==0;
    }
};