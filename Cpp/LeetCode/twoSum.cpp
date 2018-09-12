#include <vector>
#include <iostrem>
#include <cstdio>

using namespace std;

class Solution
{
public:
	//bruto force
	vector<int> twoSum_sol_1(vector<int> &nums, int target){
		int n = nums.length();
		for(int i = 0; i<n;++i){
			for (int j = 0; i < n; ++j)
			{
				if((nums[i]+nums[j])==target){
					vector <int> v;
					v.push_back(i);
					v.push_back(j);
					return v;	
				}
			}
		}
	}
	Solution();
	~Solution();
	
};

int main(){
	int arr[5] = {2,7,11,15};
	vector<int> v(arr, arr + sizeof(arr)/sizeof(int));
	Solution s;
 	vector <int> result = s.twoSum_sol_1(v, 9);

 	for(vector<int>::iterator it = result.begin(); it!=result.end(); ++it){
 		cout<<(*it)<<endl;
 	}
 	
	return 0;
}