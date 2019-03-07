#include <iostream>

//class Solution{
//public:
//	bool isSameTree()
//}

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
}

bool isSameTree(TreeNode* p, TreeNode *q){
	return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}



int main(){
	return 0;
}
