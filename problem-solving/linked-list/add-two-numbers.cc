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
    ListNode* reverseLinkedList(ListNode *head) {
        ListNode* new_head = nullptr;
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

    void DisplayLinkedList(ListNode* head){
        ListNode* ptr = head;
        printf("list is : ");
        while(ptr){
            printf("%d ",ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        // ListNode* list1 = reverseLinkedList(l1);
        // ListNode* list2 = reverseLinkedList(l2);

        // DisplayLinkedList(list1);
        // DisplayLinkedList(list2);

        int carry = 0;

        ListNode* head = nullptr;
        ListNode* ptr = nullptr;

        while(list1 && list2) {
            ListNode* node  = new ListNode();
            node->val = list1->val + list2->val + carry;

            carry = node->val/10;
            node->val = node->val%10;

            list1 = list1->next;
            list2 = list2->next;

            if(!head) {
                head = node;
                ptr = head;
            } else {
                ptr->next = node;
                ptr = ptr->next;
            }

        }

        while (list1) {
            ListNode* node  = new ListNode();
            node->val = list1->val + carry;

            carry = node->val/10;
            node->val = node->val%10;

            list1 = list1->next;

            if(!head) {
                head = node;
                ptr = head;
            } else {
                ptr->next = node;
                ptr = ptr->next;
            }
        }
        while (list2) {
            ListNode* node  = new ListNode();
            node->val = list2->val + carry;

            carry = node->val/10;
            node->val = node->val%10;

            list2 = list2->next;

            if(!head) {
                head = node;
                ptr = head;
            } else {
                ptr->next = node;
                ptr = ptr->next;
            }
        } 

        if(carry>0) {
            ListNode* node = new ListNode();
            node->val = carry;

            ptr->next = node;
            ptr = ptr->next;
        }

        return head;
    }
};