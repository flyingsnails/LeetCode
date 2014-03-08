#ifndef LINKLIST_H
#define LINKLIST_H
#include<iostream>
#include<vector>
#include<set>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode * CreatLinkList(int A[],int n)
{

	ListNode * head=new ListNode(A[0]);
	ListNode * tail=head;
	for(int i=1;i<n;i++)
	{
		ListNode *temp = new ListNode(A[i]);
		tail->next=temp;
		tail=temp;

	}

	return head;
}
void PrintLinkList(ListNode  * head) 
{
	ListNode * temp=head;
	while(temp)
	{
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
#endif