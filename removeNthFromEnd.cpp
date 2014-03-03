#include "LinkList.h"
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
		if(head==NULL)
			return head;
		ListNode *prior=head;
        ListNode *back=head;
		
        while(prior)
        {
			if(n<1)
				break;
            prior=prior->next;
			n--;
		 }
		if(prior==NULL)
			return head->next;
		prior=prior->next;
		while(prior)
		{
			
			prior=prior->next;
			back=back->next;
		}
		back->next=back->next->next;
		return head;

    }
};