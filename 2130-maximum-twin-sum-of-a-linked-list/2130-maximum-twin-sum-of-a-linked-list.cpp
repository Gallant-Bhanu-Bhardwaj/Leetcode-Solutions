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
    ListNode* prev = NULL, *curr = head;
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
    int pairSum(ListNode* head) {
        ListNode* slow = head, *fast = head;
        if(!head->next->next) return head->val+head->next->val;
        while(fast && fast->next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* ptr1 = head, *ptr2 = rev(slow);
        int maxSum=0;
        while(ptr2)
        {
            int res = ptr1->val + ptr2->val;
            maxSum = max(maxSum,res);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return maxSum;
    }
};