/*

### Merge two sorted lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. 

The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/

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
        ListNode* new_head = nullptr;
        ListNode* new_ptr = nullptr;

        ListNode* ptr1 = list1;
        ListNode* ptr2  = list2;
        ListNode* ptr = nullptr;

        while(ptr1 && ptr2)
        {
            if(ptr1->val<=ptr2->val)
            {
                ptr = ptr1;
                ptr1 = ptr1->next;
            }
            else{
                ptr = ptr2;
                ptr2 = ptr2->next;
            }

            ptr->next = nullptr;

            if(!new_head)
            {
                new_head = ptr;
                new_ptr = new_head;
            }
            else {
                new_ptr->next=ptr;
                new_ptr = ptr;
            }
        }

        while(ptr1)
        {
            ptr = ptr1;
            ptr1 = ptr1->next;
            ptr->next = nullptr;
            if(!new_head)
            {
                new_head = ptr;
                new_ptr = new_head;
            }
            else {
                new_ptr->next=ptr;
                new_ptr = ptr;
            }
        }

        while(ptr2)
        {
            ptr = ptr2;
            ptr2 = ptr2->next;
            ptr->next = nullptr;
            if(!new_head)
            {
                new_head = ptr;
                new_ptr = new_head;
            }
            else {
                new_ptr->next=ptr;
                new_ptr = ptr;
            }
        }

        return new_head;
    }
};