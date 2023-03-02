// String Compression
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n=chars.size();
        vector<char> a(n);
        a=chars;
        chars.clear();
        // for(auto aa:a){
        //     cout<<aa<<" ";
        // }
        int i=0;
        chars.push_back(a[0]);
        while(i<n){
            int count=1;
            int j=i+1;
            while(i<n && j<n && a[i]==a[j]){
                i++;
                j++;
                count++;
            }
            if(count!=1){
                vector<int> digit;
                int t=count;
                if(t<10){
                    chars.push_back((char)t + '0');
                }
                else while(count!=0){
                    digit.push_back(count%10);
                    count/=10;
                }
                reverse(digit.begin(), digit.end());
                for(auto a:digit)
                     chars.push_back((char)a+'0');

            }
            i++;
            if(i<n) chars.push_back(a[i]);
        }
        return chars.size();
    }
};