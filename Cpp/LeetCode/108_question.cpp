#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void binaryFormation(int l, int r, vector<int>& nums, TreeNode *root){
	if(l<=r){
		int mid = l + ((r-l)/2);
		root = new TreeNode(nums[mid]);
		cout<<root->val<<endl;
		binaryFormation(mid+1, r, nums, root->right);
		binaryFormation(l, mid-1, nums, root->left);
	}
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
	TreeNode* res;
	binaryFormation(0, nums.size(), nums, res);
	return res;
}

int main(){
	vector<int> v;
	v.push_back(-10);
	v.push_back(-3);
	v.push_back(0);
	v.push_back(5);
	v.push_back(9);
	vector<int> v2;
	v2.push_back(-10);
	v2.push_back(-3);
	v2.push_back(0);
	v2.push_back(5);
	v2.push_back(9);
	v2.push_back(10);
	
	TreeNode * dale = sortedArrayToBST(v);
	cout<<dale->val<<endl;
	return 0;
}
