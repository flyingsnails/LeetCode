#include "LinkList.h"

class Solution {
public:
	ListNode *deleteDuplicates(ListNode *head) {
		if(head==NULL||head->next==NULL)
			return head;
		int current_value=head->val;
		ListNode * prior=head;
		ListNode * current_node=head->next;
		//bool duplicate=false;
		while(current_node)
		{
			if(current_node->val==current_value)
			{
				prior->next=current_node->next;

			}
			else
			{
				current_value=current_node->val;
				prior=current_node;
			}
			current_node=current_node->next;
		}
		return head;

	}
};