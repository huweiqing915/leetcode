/********************************************************************************** 
 * * 
 * * You are given two linked lists representing two non-negative numbers. 
 * * The digits are stored in reverse order and each of their nodes contain a single digit. 
 * * Add the two numbers and return it as a linked list.
 * * 
 * * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * * Output: 7 -> 0 -> 8
 * *               
 * **********************************************************************************/

/**
 *   Definition for singly-linked list.
 *   struct ListNode {
 *		int val;
 *		ListNode *next;
 *      ListNode(int x) : val(x), next(NULL) {}
 *	 };
 **/

class Solution {
public:
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		int carry = 0, val;
		ListNode *res = new ListNode(0);
		ListNode *l = res;
		val = l1->val + l2->val;
		res->val = val % 10;
		carry = val / 10;
		l1 = l1->next;
		l2 = l2->next;
		l = res;
		while (l1 != NULL || l2 != NULL) {
			int lval = l1 == NULL ? 0 : l1->val;
			int rval = l2 == NULL ? 0 : l2->val;
			val = lval + rval + carry;
			ListNode *node = new ListNode(val % 10);
			carry = val / 10;
			l->next = node;
			l = l->next;
			if (l1 != NULL)
				l1 = l1->next;
			if (l2 != NULL)
				l2 = l2->next;
		}
		if (carry != 0) {
			ListNode *node = new ListNode(carry);
			l->next = node;
		}
		return res;
	}
}
