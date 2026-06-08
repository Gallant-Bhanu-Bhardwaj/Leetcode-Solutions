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
ListNode* rev(ListNode* head)
{
    ListNode* prev = NULL, *curr=head;
    while(curr)
    {
        ListNode* nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    return prev;
}
    ListNode* doubleIt(ListNode* head) {
        if(!head) return NULL;

        head = rev(head);
        int carry = 0;
        ListNode* temp = head, *ans = nullptr;
        int num = temp->val*2 + carry;
        carry = num / 10;
        int rem = num % 10;
        ListNode* ptr = new ListNode(rem);
            ans = ptr;
        temp = temp -> next;   

        while(temp)
        {
            num = temp->val*2 + carry;
            carry = num / 10;
            rem = num % 10;
            ListNode* p = new ListNode(rem);
            ptr -> next = p;
            ptr = ptr->next;
            temp = temp -> next;
        }
        if(carry == 1)
        {
            ListNode* q = new ListNode(carry);
            ptr->next = q;
            q->next = NULL;
        }
        ans = rev(ans);
        return ans;
    }
};