#include "LinkList.h"
class Solution {
public:
	vector< vector<int> > result;
	vector<int> com;
	vector<vector<int> > combine(int n, int k) 
	{
		if(com.size()==0)
			com.resize(k);

		for(int i=n;i>=k;i--)
		{
			com[k-1]=i;
			if(k==1)
			{
				result.push_back(com);
			}
			else
				combine(i-1,k-1);


		}
		return result;
	}
};