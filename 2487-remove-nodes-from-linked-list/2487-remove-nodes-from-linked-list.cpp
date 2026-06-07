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
ListNode* rev(ListNode* head)
{
    ListNode* prev= NULL, *curr = head;
    while(curr)
    {
        ListNode* nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    return prev;
}

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(!head || !head->next) return head;
        head = rev(head);
        ListNode* ptr = head;
        while(ptr && ptr->next)
        {
            if(ptr->val > ptr->next->val)
             ptr->next = ptr->next->next;
            else
             ptr = ptr->next; 
        }
        head = rev(head);
        return head;
    }
};