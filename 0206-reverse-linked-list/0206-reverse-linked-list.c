/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prevnode = NULL;
    struct ListNode* currnode = head;
    struct ListNode* nextnode = head;

    while(nextnode != NULL)
    {
        nextnode = nextnode -> next;
        currnode -> next = prevnode;
        prevnode = currnode;
        currnode = nextnode;
    }
    return prevnode;
}