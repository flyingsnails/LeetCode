#include "LinkList.h"
class Solution {
public:
	double findMedianSortedArrays(int A[], int m, int B[], int n) {
		double result;
		if((m+n)%2==0)
		{
			result=(getKthSortedArry(A,m,B,n,(m+n)/2)+getKthSortedArry(A,m,B,n,(m+n)/2+1))/2.0;
		}
		else
		{
			result= getKthSortedArry(A,m,B,n,(m+n)/2+1);
		}

		return result;
	}
	
	int getKthSortedArry(int A[],int m,int B[],int n,int k)
	{
		if(m<=0)
			return B[k-1];
		if(n<=0)
			return A[k-1];
		if(k<=1)
			return A[0]<B[0]?A[0]:B[0];
		if(A[m/2]>=B[n/2])
		{
			if((m/2+n/2+1)>=k)
			{
				getKthSortedArry(A,m/2+1,B,n,k);
			}
			else
			{
				getKthSortedArry(A,m,B+n/2+1,n-n/2-1,k-n/2-1);
			}	
		}
		else
		{
			if((m/2+n/2+1)>=k)
			{
				getKthSortedArry(A,m,B,n/2+1,k);
			}
			else
			{
				getKthSortedArry(A+m/2+1,m-m/2-1,B,n,k-m/2-1);
			}	
		}
	}

};
