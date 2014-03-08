#include"LinkList.h"
class Solution {
public:
	 vector<int> climb_ways;
	int climbStairs(int n) {
		if(n<=0)
			return 0;
		if(n==1)
			return 1;
		if(n==2)
			return 2;
		if(climb_ways.size()==0)
		{
			climb_ways.resize(n);
			for(auto it=climb_ways.begin();it!=climb_ways.end();it++)
				*it=-1;
			climb_ways[0]=1;
			climb_ways[1]=2;
		}
		if(climb_ways[n-1]==-1)
		{
			
			climb_ways[n-1]=climbStairs(n-1)+climbStairs(n-2);
			
		}
		return climb_ways[n-1];
		
	}
};
