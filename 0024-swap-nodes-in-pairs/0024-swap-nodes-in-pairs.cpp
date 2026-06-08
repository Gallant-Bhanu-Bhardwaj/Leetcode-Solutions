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
        if(!head || !head->next) return head;
        ListNode* p , *q;
        int temp;
        p = head , q = head->next;
        while(q)
        {
            temp = p->val;
            p->val = q->val;
            q->val = temp;
            p = q->next;
            q = p?p->next:0;
        }
        return head;
    }
};