//请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
//https://leetcode-cn.com/problems/delete-node-in-a-linked-list/
//这道题就妙在只给定删除节点，
//只需将下一个节点的状态赋给当前节点，
//再删除下一个节点。 如果按照正常思维，不太好做。

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
void deleteNode(struct ListNode* node) {
	node->val = node->next->val;
	node->next = node->next->next;
}