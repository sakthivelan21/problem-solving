/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        List<ListNode> list = new ArrayList<ListNode>();
        int length =0;
        while(head!=null)
        {
            list.add(head);
            head=head.next;
            length++;
        }
        return list.get(length/2);
    }
}

// Time complexity is O(n) 
// Space Complexity is O(n) 


// best approach 


