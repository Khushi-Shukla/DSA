/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=NULL, *nextone=NULL;
        while(temp!=NULL){
            nextone=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nextone;
            
        }
        
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        head=reverse(head);
        int count=0;
        ListNode* temp=head;
        if(n==1){
            head=head->next;
            return reverse(head);
        }
        while(temp!=NULL && temp->next!=NULL){
            count++;
            if(count==n-1){
                if(temp->next->next!=NULL)
                    temp->next=temp->next->next;
                else
                    temp->next=NULL;
            }
            temp=temp->next;
        }
        return reverse(head);
    }
};