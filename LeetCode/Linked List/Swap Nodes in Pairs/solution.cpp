class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        // Base Case
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* first = head;
        ListNode* second = head->next;

        // Swap remaining list
        first->next = swapPairs(second->next);

        // Swap current pair
        second->next = first;

        return second;
    }
};