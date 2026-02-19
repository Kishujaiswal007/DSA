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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode dummy(0);
        dummy.next = head;

        int length = 0;
        ListNode* temp = head;

        // First pass: calculate length
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        // Find node before the one to delete
        int steps = length - n;
        ListNode* curr = &dummy;

        for (int i = 0; i < steps; i++) {
            curr = curr->next;
        }

        // Delete node
        curr->next = curr->next->next;

        return dummy.next;
    }
};
