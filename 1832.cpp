// Check if the Sentence Is Pangram
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> mp;
        for(auto s: sentence){
            mp[s]++;
        }
        if(mp.size()==26) return true;
        return false;
    }
};

int main(){
    Solution s;
    cout<<s.checkIfPangram("thequickbrownfoxjumpsoverthelazydog");
}