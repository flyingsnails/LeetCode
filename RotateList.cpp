#include"LinkList.h"
class Solution {
public:
	ListNode *rotateRight(ListNode *head, int k) {
		if(head==NULL||head->next==NULL)
			return head;
		int node_num=1;
		ListNode* prior=head;
		ListNode * current=head->next;
		while(current)
		{
			node_num++;
			prior=current;
			current=current->next;
		}
		prior->next=head;
		current=head;
		k=k%node_num;
		k=node_num-k;
		while(k>0)
		{
			prior=current;
			current=current->next;
			k--;
		}
		prior->next=NULL;
		return current;
	}
};