#include <bits/stdc++.h>

using namespace std;

int rob(vector<int>& nums) {
	int count_prev2 = 0, count_prev1 = nums[0], temp = nums[0];
	for(int i = 1; i<nums.size(); ++i){
	    if(nums[i]+count_prev2>count_prev1) 
		temp = nums[i]+count_prev2;
	    else temp = count_prev1;
	    count_prev2 = count_prev1;
	    count_prev1 = temp;
	}
	return count_prev1;
}

int main(){
	vector<int> v {3,2,5,7,1};
	cout<<rob(v)<<endl;	
}
