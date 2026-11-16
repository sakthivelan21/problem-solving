/*
You are given two non-empty linked lists representing two non-negative integers. ]
The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.



Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 

Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1 && l2)
            return l2;
        else if (!l2 && l1)
            return l1 ;
        else if(!l2 && !l1)
            return nullptr;

        int carry = 0,sum=0;

        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;

        ListNode* result = nullptr;

        ListNode* ptr3 = nullptr;

        while (ptr1 && ptr2) {
            sum = ptr1->val + ptr2->val + carry;
            carry=0;
            if (sum >= 10) {
                carry = sum / 10;
                sum = sum % 10;
            }

            ListNode* node = new ListNode(sum);

            if(!result)
            {
                result=node;
                ptr3=node;
            }
            else {
                ptr3->next = node;
                ptr3=node;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }

        while(ptr1)
        {
            sum = ptr1->val + carry;
            carry=0;
            if (sum >= 10) {
                carry = sum / 10;
                sum = sum % 10;
            }

            ListNode* node = new ListNode(sum);

            if(!result)
            {
                result=node;
                ptr3=node;
            }
            else {
                ptr3->next = node;
                ptr3=node;
            }
            ptr1=ptr1->next;
        }

        while(ptr2)
        {
            sum = ptr2->val + carry;
            carry=0;
            if (sum >= 10) {
                carry = sum / 10;
                sum = sum % 10;
            }

            ListNode* node = new ListNode(sum);

            if(!result)
            {
                result=node;
                ptr3=node;
            }
            else {
                ptr3->next = node;
                ptr3=node;
            }
            ptr2=ptr2->next;
        }

        if(carry>0)
        {
            ListNode* node = new ListNode(carry);
            carry=0;
            if(!result)
            {
                result=node;
                ptr3=node;
            }
            else {
                ptr3->next = node;
                ptr3=node;
            }
        }

        return result;
    }
};
