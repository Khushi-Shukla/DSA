// Add Binary
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0,i,j=a.length()-1, k=b.length()-1;
        string str="";
        while(j>=0 && k>=0){
            if(a[j]=='1' && b[k]=='1'){
                if(carry==1)
                    str='1'+str;
                else
                    str='0'+str;
                //str=carry==1?"1":"0"+str;
                carry=1;
            }
            else if((a[j]=='1' && b[k]=='0' )|| (a[j]=='0' && b[k]=='1' )){
                if(carry==1)
                    str='0'+str;
                else{
                    str='1'+str;
                    carry=0;
                }
            }
            else{
                if(carry==1)
                    str='1'+str;
                else
                    str='0'+str;
                carry=0;
            }
            j--;
            k--;
        }
        
        while(j>=0){
             if(a[j]=='1' && carry==1){
                str='0'+str;
                carry=1;
            }
           else if((a[j]=='1' && carry==0) || (a[j]=='0' && carry==1) ){
                str='1'+str;
                carry=0;
            }
            else{
                str=a[j]+str;
                carry=0;
            }
                
            j--;
        }
        
        while(k>=0){
             if(b[k]=='1'&& carry==1){
                str='0'+str;
                carry=1;
            }
            else if((b[k]=='1'&& carry==0) || (b[k]=='0' &&carry==1) ){
                str='1'+str;
                carry=0;
            }
             else{
                str=b[k]+str;
                carry=0;
            }
            k--;
        }
        if(carry==1)
            str='1'+str;
        return str;
    }
};