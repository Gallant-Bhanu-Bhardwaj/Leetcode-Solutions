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

 int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;

        ListNode* p=head, *q = head->next;
        while(q)
        {
            int res = hcf(p->val,q->val);
            ListNode* ptr = new ListNode(res);
            ptr->next = q;
            p->next = ptr;
            p = q;
            q = p->next;
        }
        return head;

    }
};