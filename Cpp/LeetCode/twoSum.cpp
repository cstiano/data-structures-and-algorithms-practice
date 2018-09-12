#include <vector>
#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

class Solution
{
public:

	/* Sample of map
		std::map<char,int> mymap;
		mymap.insert ( std::pair<char,int>('a',100) );
		mymap.at("a") = 10;

		for(auto& x: mymap){
			std::cout<< x.first << ": "<< x.second << std::endl;		
		}
	*/	

	//bruto force - complexity of O(n^2)
	vector<int> twoSum_sol_1(vector<int> &nums, int target){
		int n = nums.size();
		for(int i = 0; i<n;++i){
			for (int j = i+1; i < n; ++j)
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

	vector<int> twoSum_sol_2(vector<int> &nums, int target)
	{
		std::map<int,int> hashTable;
		for(int i = 0; i < nums.size(); ++i)
		{
			if(hashTable.count(target - nums[i])!=0){
				std::vector <int> res;
				res.push_back(hashTable.at(nums[i]));
				res.push_back(hashTable.at(target - nums[i]));
				return res;			
			}
			if(hashTable.count(nums[i]) == 0){
				hashTable.insert(std::pair<int,int>(nums[i],i));			
			}		
		}
	}
	Solution();
	~Solution();
	
};

int main(){
	int arr[5] = {2,7,11,15};
	vector<int> v(arr, arr + sizeof(arr)/sizeof(int));
	std::map <int,int> test;
	test.insert(std::pair<int,int> (1,2));
	std::cout<< test.at(1)<<std::endl;
	return 0;
}
