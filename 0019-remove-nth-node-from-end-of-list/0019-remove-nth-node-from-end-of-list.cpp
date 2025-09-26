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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode *slow;
     ListNode *fast;
     slow=head;
     fast=head;
     ListNode *prev=nullptr;


    for(int i=0;i<n;i++)
    {
        fast=fast->next;
    } 
    
    if(!fast)
    {
        ListNode* toDelete = head;
        head=head->next;
        delete toDelete;
        return head;
    }

     while(fast)
     {
        fast=fast->next;
        prev=slow;
        slow=slow->next;
     }    
     prev->next=slow->next;
     delete slow;

     return head;
    }
};