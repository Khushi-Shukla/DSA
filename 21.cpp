#include<bits/stdc++.h>
using namespace std;
//Merge Two Sorted Lists
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1, *t2=l2;
        ListNode* head=NULL;
        if(t1==NULL)
            return t2;
        if(t2==NULL)
            return t1;
        if(t1->val<=t2->val){
            head=new ListNode(t1->val);
            t1=t1->next;
        }
        else{
            head=new ListNode(t2->val);
            t2=t2->next;
        }
        ListNode* temp=head;
        while(t1!=NULL && t2!=NULL){
            if(t1->val<=t2->val){
                temp->next=new ListNode(t1->val);
                t1=t1->next;
            }
            else{
                temp->next=new ListNode(t2->val);
                t2=t2->next;
             }
            temp=temp->next;
        }
        while(t1!=NULL){
            temp->next=new ListNode(t1->val);
            t1=t1->next;
            temp=temp->next;
        }
         while(t2!=NULL){
            temp->next=new ListNode(t2->val);
            t2=t2->next;
            temp=temp->next;
        }
        return head;
    }
};