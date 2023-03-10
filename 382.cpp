// Linked List Random Node
//Definition for singly-linked list.
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
    ListNode* head=NULL;
    Solution(ListNode* head) {
        this->head=head;
    }
    
    int getRandom() {
        int size=0;
        ListNode* temp = this->head;
        // cout<<head->val<<endl;
        while(temp!=NULL){
            // cout<<temp->val<<" ";
            temp=temp->next;
            size++;
        }
        cout<<size;
        int value=0;
        if(size>0)
        value = rand()%size;
        else return 0;
        temp=head;
        while(value>0 && temp->next!=NULL){
            temp=temp->next;
            value--;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */