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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* ptr = nullptr,*new_ptr = nullptr;

        while(list1 && list2) {
            // printf("%d %d \n",list1->val,list2->val);
            if(list1->val<=list2->val){
                ptr = list1;
                list1 = list1->next;
            }else {
                ptr = list2;
                list2 = list2->next;
            }
            if(!head){
                head = ptr ;
                new_ptr = head;
            } else {
                new_ptr->next = ptr;
                new_ptr = ptr;
            }
            // printf("%d \n",new_ptr->val);
            ptr->next = nullptr;
            
        }

        while(list1){
            ptr = list1;
            list1 = list1->next;
             if(!head){
                head = ptr ;
                new_ptr = head;
            } else {
                new_ptr->next = ptr;
                new_ptr = ptr;
            }
            ptr->next = nullptr;
        }

        while(list2){
            ptr = list2;
            list2 = list2->next;
             if(!head){
                head = ptr ;
                new_ptr = head;
            } else {
                new_ptr->next = ptr;
                new_ptr = ptr;
            }
            ptr->next = nullptr;
        }

        return head;
    }
};