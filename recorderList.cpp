#include "LinkList.h"

class Solution {
public:
	void reorderList(ListNode *head) {
		if(head==NULL||head->next==NULL||head->next->next==NULL)
			return;
		ListNode *fast;
		ListNode *slow;
		ListNode *slow_prior;
		fast=slow=head;
		//链表节点个数是奇数的标记 slow需要多走一步
		bool symbol=true;
		while(fast)
		{
			slow_prior=slow;
			if(fast->next!=NULL)
				fast=fast->next->next;
			else
				{
					fast=NULL;
					symbol=false;
				}
			slow=slow->next;
		}
		if(symbol)
		{
			slow_prior=slow;
			slow=slow->next;
			slow_prior->next=NULL;
		}
		else
			slow_prior->next=NULL;
		reverseList(slow);
		ListNode *traverse=head;
		ListNode *temp,*temp1;
		while(traverse!=NULL&&slow!=NULL)
		{
			temp=traverse->next;
			temp1=slow;
			slow=slow->next;
			traverse->next=temp1;
			temp1->next=temp;
			traverse=temp;
        }

	}

//原地倒置链表
void reverseList(ListNode *& head)
{
	if(head==NULL||head->next==NULL)
		return ;
	ListNode * current=head->next;
	head->next=NULL;
	ListNode *temp_head;
	ListNode *temp_next;
	while(current)
	{
		temp_head=head;
		temp_next=current->next;
		head=current;
		current->next=temp_head;
		current=temp_next;

	}
	
}

	};  

	

	