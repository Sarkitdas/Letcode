class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
        ListNode *s = head;
        ListNode *l = head->next;
        while (s != NULL && l != NULL && l->next != NULL) {
            if (s == l) {
                return true;
            }
            s = s->next;
            l = l->next->next;
        }
        return false;
    }
};
