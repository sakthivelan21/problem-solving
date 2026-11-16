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
    ListNode* reverseList(ListNode* head) {
        ListNode *new_head = nullptr;

        ListNode *ptr = head;
        while(head) {

            ptr = head;
            head = head->next;
            
            if(!new_head) {
                   new_head = ptr;
                   ptr->next = nullptr;
            } else {
                    ptr->next = new_head;
                    new_head = ptr;
            }

        }
        
        return new_head;
    }
};