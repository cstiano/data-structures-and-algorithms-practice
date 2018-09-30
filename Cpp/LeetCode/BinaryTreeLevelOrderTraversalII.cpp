// 107 question of leetCode

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int> > levelOrderBottom(TreeNode* root){
	if(root==NULL) return NULL;
	TreeNode *cur;	
	queue<TreeNode*> bfs_queue;
	vector<vector<int> > result;
	result.push_back((vector<int>)(root->val));
	bfs_queue.push(root);
	while(!bfs_queue.empty()){
		cur = bfs_queue.pop();
		if(cur->left != NULL && cur->right != NULL){}
		else if(cur->left != NULL && cur->right == NULL){}
		else if(cur->left == NULL && cur->right != NULL){}
		result.push_back([cur->left->val, cur->right->val]);
	}
	for(vector<vector<int> >::iterator it = result.begin(); it!=result.end(); ++it){
			
	}
	return result;
}

int main(){
	return 0;
}
