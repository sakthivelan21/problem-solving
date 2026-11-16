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
    bool hasCycle(ListNode *head) {
        ListNode* slow_ptr = head;
        ListNode* fast_ptr = head, *fast_ptr_next = nullptr;

        while(slow_ptr !=nullptr){
            if(fast_ptr) {
                fast_ptr_next = fast_ptr->next;
                if(fast_ptr_next)
                    fast_ptr = fast_ptr_next->next;
                else 
                    fast_ptr = fast_ptr_next;
            }
            if(slow_ptr == fast_ptr){
                return true;
            }

            slow_ptr = slow_ptr->next;
        }

        return false;
    }
};