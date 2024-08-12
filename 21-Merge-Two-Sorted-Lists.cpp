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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     
       
     if(list1==NULL&&list2==NULL)
     return list1;
     if(list1==NULL&&list2!=NULL)
     return list2;
     if(list1!=NULL&&list2==NULL)
     return list1;
            ListNode * ptr=new ListNode();
            ListNode * dummy;
            dummy=ptr;
      while(list1!=NULL&&list2!=NULL)
      {
        if(list1->val<=list2->val)
        {
            ptr->next=list1;
            list1=list1->next;
            ptr=ptr->next;
        }
        else
        
        {
            ptr->next=list2;
            list2=list2->next;
            ptr=ptr->next;
        
        }
      }
      if(list1==NULL)
      {
        while(list2!=NULL)
        {
            ptr->next=list2;
            list2=list2->next;
            ptr=ptr->next;
        }
      }
      else
      {
        while(list1!=NULL)
        {
             ptr->next=list1;
            list1=list1->next;
            ptr=ptr->next;
        }
      }
      return dummy->next;
       }
    
};