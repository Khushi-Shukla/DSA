struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=nullptr, *nextone=nullptr;
        while(temp!=nullptr){
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
        while(temp!=nullptr && temp->next!=nullptr){
            count++;
            if(count==n-1){
                if(temp->next->next!=nullptr)
                    temp->next=temp->next->next;
                else
                    temp->next=nullptr;
            }
            temp=temp->next;
        }
        return reverse(head);
    }
};

#include<iostream>
using namespace std;

int main(){
    Solution s;
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    ListNode* temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

    s.removeNthFromEnd(head, 4);
    temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
