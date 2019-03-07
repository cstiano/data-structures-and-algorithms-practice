#include <bits/stdc++.h>

struct Node{
	int val;
	Node *next;
	Node(int x) : val(x), next(NULL) {}	
};

void initCircleList(Node *refPoint){
	refPoint->next = refPoint;
}

void insert (Node *refPoint, int val){
	Node *p = new Node(val);
	p->next = refPoint->next;
	refPoint->next = p;
}

int main(){
	Node *n = new Node(1);
	initCircleList(n);
	insert(n,2);
	insert(n,3);
	insert(n,4);
	insert(n,5);
	insert(n,6);
	
	Node* cur = n;	
	std::cout<<"Oie"<<std::endl;	
	for(int i = 0; i<12; ++i){
		printf("%d\n", cur->val);
		cur = cur->next;	
	}
	return 0;
}
