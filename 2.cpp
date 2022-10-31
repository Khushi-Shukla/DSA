#include<bits/stdc++.h>
using namespace std;
//  * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * 
 };
 class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* sum=new ListNode();
        ListNode *t1=l1, *t2=l2, *t3=sum, *toAdd;
        int carry=0, add;
        while(t1!=NULL && t2!=NULL){
            add=t1->val+t2->val+carry;
            if(add>9){
                add=add%10 ;
                toAdd=new ListNode(add);
                carry=1;
                sum->next=toAdd;
            }
            else{
                toAdd=new ListNode(add);
                carry=0;
                sum->next=toAdd;
            }
            // sum->next=toAdd;
            sum=sum->next;
            t1=t1->next;
            t2=t2->next;
        }
        
        while(t1!=NULL){
            if(carry==1){
                add=t1->val+1;
                if(add>9){
                    add=add%10 ;
                    toAdd=new ListNode(add);
                    carry=1;
                    sum->next=toAdd;
                 }
                else{
                    toAdd=new ListNode(add);
                    carry=0;
                    sum->next=toAdd;
                 }  
            }
            else
                sum->next=t1;
            sum=sum->next;
            t1=t1->next;
        }
         while(t2!=NULL){
            if(carry==1){
                add=t2->val+1;
                if(add>9){
                    add=add%10 ;
                    toAdd=new ListNode(add);
                    carry=1;
                    sum->next=toAdd;
                 }
                else{
                    toAdd=new ListNode(add);
                    carry=0;
                    sum->next=toAdd;
                 }  
            }
            else
                sum->next=t2;
            sum=sum->next;
            t2=t2->next;
        
        }
        if(carry==1){
            sum->next=new ListNode(1);
        }
        t3=t3->next;
        return t3;
    }
};