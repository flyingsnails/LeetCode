#include "LinkList.h"
class Solution {
public:
	int singleNumber(int A[], int n)
	{
		int single_num;
		set<int> num;
		for(int i=0;i<n;i++)
		{
			if(num.find(A[i])==num.end())
			{
				num.insert(A[i]);
			}
			else
			{
				num.erase(A[i]);
			}

		}
		for(set<int>::iterator it=num.begin();it!=num.end();it++)
			single_num=*it;
		cout<<num.size()<<endl;
		return single_num;

	}
};
int main()
{
	int A[]={1,5,3,5,1};
	Solution s;
	s.singleNumber(A,5);
	getchar();
		return 0;
}