/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
    /**
     * 
     * @param head ListNode类 
     * @param k int整型 
     * @return ListNode类
     */
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k < 2) {
            return head;
        }
        
        ListNode *last_tail = nullptr;
        ListNode *last_head = nullptr;
        ListNode *prev = nullptr;
        ListNode *current = head;
        ListNode *output = head;
        int count = 1;
        int i = 1;
        
        while (current) {
            if (i == 1) {
                prev = current;
                last_head = prev;
            }
            current = current->next;
            count++;
            i++;
            if (current == nullptr) {
                break;
            }
            if (count == k) {
                output = current;
            }
            if (i == k) {
                ListNode* next = current->next;
                ListNode* iter = prev->next;
                prev->next = next;
                while (iter != next) {
                    ListNode* temp = iter->next;
                    iter->next = prev;
                    prev = iter;
                    iter = temp;
                }

                if (last_tail) {
                    last_tail->next = prev;
                }
                last_tail = last_head;
                current = next;
                i = 1;
            }
        }

        return output;
    }
};

