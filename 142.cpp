// Linked List Cycle II
// Definition for singly-linked list.
#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool isPresent(ListNode *head){
         ListNode *fast=head, *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
                return true;
        }
        return false;
    }
    
    ListNode *detectCycle(ListNode *head) {
       if(!isPresent(head))
           return NULL;
        ListNode *fast=head, *slow=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                fast=head;
                break;
            }
        }
        if(fast==slow)
            return head;
        do{
            slow=slow->next;
            fast=fast->next;
                
        }while(fast!=slow);
      
        return fast;
    }
};