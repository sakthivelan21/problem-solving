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

    ListNode* reverse_list(ListNode* head) {
        ListNode* ptr = head, *new_head = nullptr;

        while(head) {
            ptr = head ;
            head = head->next;

            ptr->next =nullptr;

            if(!new_head) {
                new_head = ptr;
            } else {
                ptr->next = new_head;
                new_head = ptr;
            }

        }

        return new_head;
    }

    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast) {
            fast = fast->next;

            if(fast)
                fast = fast->next;

            slow = slow->next;
        }

        ListNode* reverse = reverse_list(slow);
        ListNode* ptr = head;

        int result = 0;

        while(reverse) {
            result = max(reverse->val + ptr->val,result);
            ptr = ptr->next;
            reverse = reverse->next;
        }

        return result;
    }
};