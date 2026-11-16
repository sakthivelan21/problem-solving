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
    // answer is simple via a  approach 
    /*
        101
        2.0 + 1 = 1;
        2.1 + 0 = 2;
        2.2 +1 = 5;
    */
    
    int getDecimalValue(ListNode* head) {
        int result = 0;
        while(head) {
            // same approach in bitwise 
            // result = result*2 + head->val;
            result = result <<1 ;
            result = result | head->val;
            head = head->next;
        }
        return result;
    }
};