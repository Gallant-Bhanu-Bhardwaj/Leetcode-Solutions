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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p= head , *q = head->next, *ptr = head;
        int sum = 0;
        while(q)
        {
            sum += q->val;
            q = q->next;
            if(q->val == 0)
            {
                p->next->val = sum;
                p = p->next;
                sum = 0;
                q = q->next;
            }
        }
        p->next = NULL;
        return head->next;

    }
};