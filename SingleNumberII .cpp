#include<map>
using namespace std;
class Solution {
public:
	int singleNumber(int A[], int n) {
		map<int,int> num_count;
		for(int i=0;i<n;i++)
		{
			if(num_count.find(A[i])!=num_count.end())
			{
				++num_count[A[i]];
				if(num_count[A[i]]==3)
					num_count.erase(A[i]);
			
			}
			else
				num_count.insert(make_pair(A[i],1));
		}
		auto it=num_count.cbegin();
		while(it!=num_count.cend())
		{
			if(it->second!=3)
				return it->first;
		}
	}
};