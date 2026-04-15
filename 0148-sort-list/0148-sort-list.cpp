class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL) return head;

        vector<int> ans;
        ListNode* temp = head;

        // store values
        while(temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        // sort
        sort(ans.begin(), ans.end());

        // rewrite
        temp = head;
        int i = 0;
        while(temp != NULL) {
            temp->val = ans[i++];
            temp = temp->next;
        }

        return head;
    }
};