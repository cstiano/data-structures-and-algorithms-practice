#include <bits/stdc++.h>
#include <thread>
#include <chrono>


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
	Node *n = new Node(0);
	initCircleList(n);
	for(int i = 60; i>0;--i){
		insert(n,i);
	} 
	
	Node* cur = n;	
	while(cur!=NULL){
		std::cout<<cur->val<<std::endl;
		std::this_thread::sleep_for (std::chrono::seconds(1));	
		cur = cur->next;	
	}

	return 0;
}
