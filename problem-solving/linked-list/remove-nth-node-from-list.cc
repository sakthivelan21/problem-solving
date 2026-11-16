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
        ListNode *fast_ptr = head, *slow_ptr = head;

        // move fast ptr n times forward
        for(int i=0;i<n;i++) {
            if(!fast_ptr)
                break;
            fast_ptr = fast_ptr->next;
        }   
        // start node is the required value
        if(!fast_ptr) {
            head = head->next;
            delete slow_ptr;
            return head;
        }

        while(fast_ptr->next) {
            fast_ptr = fast_ptr->next;
            slow_ptr = slow_ptr->next;
        }

        // slow_ptr is before the required target n ;

        ListNode *next = slow_ptr->next;

        slow_ptr->next = next->next;

        delete next;

        return head;

    }
};