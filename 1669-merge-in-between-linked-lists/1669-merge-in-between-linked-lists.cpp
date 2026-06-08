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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int diff = b - a + 1;
        ListNode* p = list1;
        while(a>1)
        {
            p = p->next;
            a--;
        }
        ListNode* q = p;
        while(diff>0)
        {
            q = q->next;
            diff--;
        }
        ListNode* temp = list2;
        while(temp->next!= NULL)
        {
            temp = temp -> next;
        }
        p->next = list2;
        temp -> next = q->next;

        return list1;
    }
};