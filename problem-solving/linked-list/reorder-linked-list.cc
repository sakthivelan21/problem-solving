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
    ListNode* reversed_list(ListNode* head) {
        ListNode* new_head = nullptr;
        ListNode* ptr = nullptr;

        while(head) {
            ptr = head;
            head = head->next;
            ptr->next = NULL;
            if(!new_head) {
                new_head = ptr;
            } else {
                ptr->next = new_head;
                new_head = ptr;
            }
        }

        return new_head;
              
    }

    void displayList(ListNode* head){
        ListNode* ptr = head;
        printf("list is :");
        while(ptr!=nullptr){
            printf("%d ",ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }

    ListNode* merge_two_list(ListNode *first, ListNode *second){
        ListNode* head = nullptr;
        ListNode* ptr = nullptr;

        ListNode* temp = nullptr;

        while(first && second){
            temp = first;
            first = first->next;
            temp->next = NULL;
            // printf("%d ",temp->val);
            
            if(!head){
                head = temp;
            } else {
                ptr->next = temp;
            }
            ptr = temp;


            temp = second;
            second = second->next;
            // printf("%d ",temp->val);
            temp->next = NULL;
            if(!head) {
                head = temp;
            } else {
                ptr->next =temp;
            }
            ptr = temp;
        }

        while(first!=nullptr){
            if(!head){
                ptr = first;
                head = first;
            }else {
                ptr->next = first;
                ptr = ptr->next;
            }
            first = first->next;
        }

        while(second!=nullptr) {
            if(!head){
                ptr = second;
                head = second;
            }else {
                ptr->next = second;
                ptr = ptr->next;
            }
            second = second->next;
        }

        // displayList(head);

        return head;
    }

    void reorderList(ListNode* head) {
               
        ListNode* slow_ptr = nullptr, *fast_ptr = nullptr;
        ListNode* slow_prev_ptr = nullptr;
        
        
        // find middle of the linked list 
        slow_ptr = head;
        fast_ptr  = head->next;
        
        while(fast_ptr!=nullptr) {
            fast_ptr = fast_ptr->next;
            if(fast_ptr)
                fast_ptr = fast_ptr->next;
            slow_prev_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
        if(slow_prev_ptr)
            slow_prev_ptr->next = nullptr;
        else 
            return;
        // reverse the linked list after mid
        ListNode* second_list = reversed_list(slow_ptr);

        // displayList(second_list);
        // displayList(head);
        
        head = merge_two_list(head,second_list);
        
    }
    
};