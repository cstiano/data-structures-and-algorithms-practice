#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
	queue<int> ref_q;
	int j = 0;
	for(int i = 0; i<(m+n); ++i){
		if(i<m) ref_q.push(nums1[i]);
		if(j<n){		
			if(ref_q.front() <= nums2[j] && !ref_q.empty()) {
				nums1[i] = ref_q.front();
				ref_q.pop();
			}else{
				nums1[i] = nums2[j];
				j++;			
			}
		}else{
			nums1[i] = ref_q.front();
			ref_q.pop();		
		}
			
	}
}

int main(){
	vector<int> nums1;
	nums1.push_back(1);
	nums1.push_back(2);
	nums1.push_back(3);
	nums1.push_back(0);
	nums1.push_back(0);
	nums1.push_back(0);	
	vector<int> nums2;
	nums2.push_back(2);
	nums2.push_back(5);
	nums2.push_back(6);

	merge(nums1, 3, nums2, 3);
	for(int i = 0; i<nums1.size(); ++i){
		cout<<nums1[i]<<endl;	
	}
	
	return 0;
}
