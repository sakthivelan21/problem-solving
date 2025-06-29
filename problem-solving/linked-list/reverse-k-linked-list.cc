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
    ListNode* reverse_list(ListNode* head){
        ListNode *new_head = nullptr;
        ListNode* ptr = nullptr;

        while(head) {
            ptr = head;
            head = head->next;
            ptr->next = nullptr;
            
            if(!new_head){
                new_head = ptr;
            } else {
                ptr->next = new_head;
                new_head = ptr;
            }
        }

        return new_head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* new_head = nullptr, *new_head_last = nullptr;

        ListNode *reverse_head = nullptr, *ptr = head, *reverse_head_start = nullptr;

        int count = 0;

        while(ptr){
            ListNode* temp = ptr;
            ptr = ptr->next;
            temp->next = nullptr;

            // count exceed check

            if(count>=k) {
                count = 0;
                if(!new_head) {
                    new_head = reverse_head;
                } else {
                    new_head_last->next = reverse_head;
                }
                new_head_last = reverse_head_start;

                reverse_head = nullptr;
                reverse_head_start=nullptr;
            }


            if(!reverse_head){
                reverse_head = temp;
                reverse_head_start  = temp;
            } else {
                temp->next = reverse_head;
                reverse_head = temp;
            }
            count++;
        }

        if(count<k){
            reverse_head = reverse_list(reverse_head);
        } 
        if(!new_head){
            new_head = reverse_head;
        } else {
            new_head_last->next = reverse_head;
        }

        return new_head;
    }
};