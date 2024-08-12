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
    ListNode* swapPairs(ListNode* head) {
      
        if(head==NULL)
        return NULL;
        ListNode* first=head;
        ListNode* sec;
        
        while(first!=NULL)
        {  
            if(first->next!=NULL)
            {
             int  temp=first->val;
            sec=first->next;    
            first->val=sec->val;
            sec->val=temp;
             first=sec->next;
            }
            else
            {
                first=first->next;
            }
           
            
        }
        return head;
    }
};