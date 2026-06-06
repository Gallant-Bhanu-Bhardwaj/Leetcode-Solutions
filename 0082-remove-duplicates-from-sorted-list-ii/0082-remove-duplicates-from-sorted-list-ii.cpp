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
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    ListNode* prev = dummy;  
    ListNode* cur  = head;
    dummy->next = head;

    while (cur) {
        if (cur->next && cur->val == cur->next->val) {
            int dup = cur->val;
            while (cur && cur->val == dup)  
                cur = cur->next;
            prev->next = cur;             
        } else {
            prev = cur;                     
            cur  = cur->next;
        }
    }
    ListNode* result = dummy->next;
    delete dummy;                            
    return result;
}
};