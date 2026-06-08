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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p = head;
        for(int i=1;i<k;i++)
         p = p->next;

        ListNode* ptr = p;
        ListNode* q = head;
        while(p->next != NULL)
        {
            q = q->next;
            p = p->next;
        } 
        int temp = ptr -> val;
        ptr->val = q -> val;
        q->val = temp;

        return head;
    }
};