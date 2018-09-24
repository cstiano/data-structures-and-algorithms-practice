#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode (int x) : val(x), next(NULL) {}
};

ListNode * deleteDuplicates(ListNode* head){
	ListNode * cur = head;
	while(cur!=NULL){
		if(cur->next != NULL){
			if(cur->val == cur->next->val){
				cur->next = cur->next->next;		
			}else {
				cur = cur->next;		
			}
		}else cur = cur->next;
	}
	return head;
}

int main(){
	return 0;
}
