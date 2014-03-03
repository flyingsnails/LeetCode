#include "LinkList.h"
class Solution {
public:
	ListNode *deleteDuplicates(ListNode *head) {
		if(head==NULL||head->next==NULL)
			return head;
		ListNode * temp_head=new ListNode(0);
		temp_head->next=head;
		
		ListNode *prior=temp_head;
		ListNode *current_node=head;;
		
		ListNode *after=head->next;
		bool duplicate=false;
		head=temp_head;
		while(after)
		{
			
			if(current_node->val!=after->val)
			{
				if(!duplicate)
				{
					prior->next=current_node;
					prior=current_node;
					current_node=after;
					after=after->next;
					duplicate=false;
				}
				else
				{
					current_node=after;
					after=after->next;
					
						duplicate=false;

				}
			}
			else
			{
				duplicate=true;
				after=after->next;
			}
			
		}
		if(!duplicate)
			prior->next=current_node;
		else
		{
			prior->next=NULL;
		}
		return head->next;
	}
};
