/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <unordered_set>

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* current = head;
        unordered_set<ListNode*> set;
        while (current != NULL) {
            if (set.find(current) != set.end()) {
                return true;
            }
            set.insert(current);
            current = current->next;
        }
        return false;
    }
};

