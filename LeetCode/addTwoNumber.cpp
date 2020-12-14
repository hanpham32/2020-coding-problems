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
		int sum = 0;
		ListNode* ans = new ListNode(0);
		ListNode* head = ans;
		// Create head ListNode to store temp pointer

		while (l1 || l2) {
			sum += (l1? l1->val:0) + (l2? l2->val:0);
			head -> next = new ListNode(sum%10);
			// Set node = sum
			head = head -> next; // move on to next node
			sum /= 10; // get remainder
			if (l1) l1 = l1->next; // move on to next nodes
			if (l2) l2 = l2->next;
		}	
		if (sum > 0) {
			head -> next = new ListNode(sum);
		} // If there is remainder, set it as a new node
		// return ans ListNode, the starting pointer
		return ans->next;
    }
};
