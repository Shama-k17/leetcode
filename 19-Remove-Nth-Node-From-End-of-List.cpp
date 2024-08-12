class Solution {
public:
int findlen(ListNode* head )
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
           int l=findlen(head);
           if(n==l)
           {
            ListNode* temp;
            temp=head->next;
            delete(head);
            return temp;
           }
           int len=l-n;
           ListNode* prev;
        ListNode*temp;
        temp=head;
        while(len--)
        {
            prev=temp;
            temp=temp->next;
        }

        prev->next=temp->next;
        delete(temp);
        return head;
    }
};