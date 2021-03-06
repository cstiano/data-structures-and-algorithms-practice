#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL){}
};

ListNode* solution1(ListNode* l1, ListNode* l2){
	ListNode *res = new ListNode(-1);	
	ListNode *cur = res;
	while(l1!=NULL){		
		if(l2==NULL){
			cur->next = l1;
			return res->next;
		}
		if(l1->val <= l2->val){
			cur->next = l1;
			cur = cur->next;			
			l1 = l1->next;			
		}else{
			cur->next = l2;
			cur = cur->next;
			l2 = l2->next;		
		}	
	}
	if(l2!=NULL){
		cur->next = l2;
		return res->next;
	}else{
		return res->next;
	}	
}

int main(){
	ListNode* L1 = new ListNode(0);
	ListNode* cur = L1;
	for(int i = 1; i<10; ++i){
		cur->next = new ListNode(i*2);
		cur = cur->next;	
	}
	cur = L1;
	cout<<"Lista 1"<<endl;
	while(cur!=NULL){
		cout<<cur->val<<endl;
		cur = cur->next;	
	}	

	ListNode* L2 = new ListNode(1);
	cur = L2;
	for(int i = 1; i<5; ++i){
		cur->next = new ListNode(i);
		cur = cur->next;	
	}

	cur = L2;
	cout<<"Lista 2"<<endl;
	while(cur!=NULL){
		cout<<cur->val<<endl;
		cur = cur->next;	
	}

	ListNode* result = solution1(L2,L1);
	
	cout<<"Lista resultante"<<endl;
	while(result!=NULL){
		cout<<result->val<<endl;
		result = result->next;	
	}
		
	return 0;
}
