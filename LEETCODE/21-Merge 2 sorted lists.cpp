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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);  // create a dummy node to start the list
        ListNode* current = result;  // pointer to the current node in the result list

        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {  // if value in l1 is smaller, append it to result
                current->next = l1;
                l1 = l1->next;
            } else {  // if value in l2 is smaller or equal, append it to result
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;  // move the current pointer to the last node in result
        }

        if (l1 != NULL) {  // if l1 still has remaining nodes, append them to result
            current->next = l1;
        } else {  // if l2 still has remaining nodes, append them to result
            current->next = l2;
        }

        return result->next;  // skip the dummy node and return the actual list
    }
};
