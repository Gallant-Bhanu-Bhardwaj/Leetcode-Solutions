/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int len(ListNode* head) {
        ListNode* ptr = head;
        int cnt = 0;
        while (ptr) {
            cnt++;
            ptr = ptr->next;
        }
        return cnt;
    }
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int count1 = len(headA);
        int count2 = len(headB);
        int diff = abs(count1 - count2);
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        // int n = count1>count2?count1:count2;
        if (count1 > count2) {
            for (int i = 0; i < diff; i++) {
                ptr1 = ptr1->next;
            }
        } else if (count1 < count2) {
            for (int i = 0; i < diff; i++) {
                ptr2 = ptr2->next;
            }
        }
        while (ptr1) {
            if(ptr1 == ptr2) return ptr1;    
            if (ptr1->next == ptr2->next) return ptr1->next;  
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};