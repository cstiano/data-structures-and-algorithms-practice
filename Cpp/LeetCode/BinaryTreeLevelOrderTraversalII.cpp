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

vector<vector<int>> levelOrderBottom(TreeNode* root){
	if(root==NULL) return NULL;
	queue<TreeNode*> bfs_queue;
	vector<vector<int>> result;
	result.push_back();
	bfs_queue.push(root);
	while(!bfs_queue.empty()){

	} 
}

int main(){
	return 0;
}
