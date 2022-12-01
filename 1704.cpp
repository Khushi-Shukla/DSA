//Determine if String Halves Are Alike
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int h = n/2;
        int c1=0,c2=0,v1=0,v2=0;
        for(int i=0;i<h;i++){
            char a=s[i];
            if(a=='a' || a=='A' ||
               a=='e' || a=='E' ||
               a=='i' || a=='I' ||
               a=='o' || a=='O' ||
               a=='u' || a=='U')
                v1++;
            else c1++;
            a=s[n-i-1];
            if(a=='a' || a=='A' ||
               a=='e' || a=='E' ||
               a=='i' || a=='I' ||
               a=='o' || a=='O' ||
               a=='u' || a=='U')
                v2++;
            else c2++;
        }
        return(v1==v2 && c1==c2);
    }
};

int main(){
    Solution s;
    cout<<s.halvesAreAlike("BoOk");
    return 0;
}