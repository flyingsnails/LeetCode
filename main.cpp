#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode * creatNodeList(int A[],int n)
{

	ListNode * head=new ListNode(A[0]);
	ListNode * tail=head;
	for(int i=1;i<n;i++)
	{
		ListNode *temp = new ListNode(A[i]);
		tail->next=temp;
		tail=temp;

	}
	ListNode *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<endl;
		temp=temp->next;
	}
	return head;
}
class Solution {
public:
	void reorderList(ListNode *head) {
		if(head==NULL||head->next==NULL||head->next->next==NULL)
			return;
		ListNode *fast;
		ListNode *slow;
		fast=slow=head;
		//链表节点个数是奇数的标记 slow需要多走一步
		bool symbol=true;
		while(fast)
		{
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
			slow=slow->next;
		//reverseList(slow);
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
		void reverseList(ListNode * head)
		{

		}
	};  

	int main()
	{

		int A[]={1,2,3,4,5,6,7};
		int n=3;
		Solution s;
		ListNode* head=creatNodeList(A,7);
		ListNode *temp=head;
		while(temp)
		{
			cout<<temp->val<<endl;
			temp=temp->next;
		}
		s.reorderList(head);

		while(head)
		{
			cout<<head->val<<endl;
			head=head->next;
		}
		getchar();
		return 0;
	}