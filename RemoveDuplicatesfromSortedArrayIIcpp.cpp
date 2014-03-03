#include "LinkList.h"
class Solution {
public:
	int removeDuplicates(int A[], int n) {
		if(n<=2)
			return n;
		int current_value=A[0];
		int symbol=1;
		int removed_num=0;
		int result=n;
		for(int i=1;i<n;i++)
		{
			if(A[i]!=current_value)
			{
				current_value=A[i];
				symbol=1;

			}
			else
			{
				if(symbol==1)
				{
					symbol++;
				}
				else
				{
					removed_num++;
					result--;
					continue;
				}
			}
			A[i-removed_num]=A[i];
		}

		return result;
	}
};