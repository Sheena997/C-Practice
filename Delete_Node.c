//���дһ��������ʹ�����ɾ��ĳ�������и����ģ���ĩβ���ڵ㣬�㽫ֻ������Ҫ��ɾ���Ľڵ㡣
//https://leetcode-cn.com/problems/delete-node-in-a-linked-list/
//����������ֻ����ɾ���ڵ㣬
//ֻ�轫��һ���ڵ��״̬������ǰ�ڵ㣬
//��ɾ����һ���ڵ㡣 �����������˼ά����̫������

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