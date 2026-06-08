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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr = NULL;
        if(!list1) return list2;
        if(!list2) return list1;

        if(list1->val < list2->val)
        {
            ptr = list1;
            list1 = list1 -> next;
        }
        else
        {
            ptr = list2;
            list2 = list2->next;
        }
    ListNode* head = ptr;
        while(list1 && list2)
        {
            if(list1->val > list2->val)
            {
                ptr->next = list2;
                list2 = list2->next;
                ptr= ptr->next;
            }
            else if(list1->val < list2->val)
            {
                ptr->next = list1;
                list1 = list1->next;
                ptr = ptr->next;
            }
            else
            {
                ptr->next = list1;
                list1 = list1->next;
                ptr = ptr->next;

                ptr->next = list2;
                list2 = list2 -> next;
                ptr = ptr->next;
            }
        }
        if(!list1)
         ptr->next = list2;
        if(!list2)
         ptr->next = list1;

         return head; 

    }
};