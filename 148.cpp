// Sort List
// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> sorted;
        ListNode* temp=head;
        while(temp!=NULL){
            sorted.push_back(temp->val);
            temp=temp->next;
        }
        sort(sorted.begin(), sorted.end());
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=sorted[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};