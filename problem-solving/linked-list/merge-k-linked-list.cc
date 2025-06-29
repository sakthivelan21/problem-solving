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
// using priority queue also a approach

    ListNode* mergeTwoList(ListNode* list1 , ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* ptr = nullptr;
        ListNode* iter = nullptr;

        while(list1 && list2) {
            
            if(list1->val<list2->val){
                ptr = list1;
                list1 = list1->next;
            } else {
                ptr = list2;
                list2 = list2->next;
            }

            ptr->next = nullptr;

            if(!head) {
                head = ptr;
                iter = ptr;
            } else {
                iter->next = ptr;
                iter = ptr;
            }
        }

        while(list1) {
            ptr = list1 ;
            list1 = list1->next;
            ptr->next = nullptr;

            if(!head) {
                head = ptr;
                iter = ptr;
            } else {
                iter->next = ptr;
                iter = ptr;
            }
        }

        while(list2) {
            ptr = list2 ;
            list2 = list2->next;
            ptr->next = nullptr;

            if(!head) {
                head = ptr;
                iter = ptr;
            } else {
                iter->next = ptr;
                iter = ptr;
            }
        }

        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = nullptr;

        for(int i=0;i<lists.size();i++){
            head = mergeTwoList(head,lists[i]);
        }

        return head;
    }
};