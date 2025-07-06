/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *prev = nullptr;
        ListNode *fast = head;
        ListNode *slow = head;
        int f=0;
        // detect the point whether cycle occurs with flyod
        // move fast twice , slow once
        while(fast && fast->next) {

            fast = fast->next;
            slow = slow->next;

            if(fast) {
                fast = fast->next;
            }

            if(slow==fast) {
                f=1;
                break;
            }
        }
        // if no cycle return nil
        if(!f)
            return nullptr;
        // move prev one step at a atime , with slow as one step;
        // they will meet at a point
        prev = head;

        while(prev!=slow) {
            slow = slow->next;
            prev = prev->next;
        }

        return prev;
    }
};