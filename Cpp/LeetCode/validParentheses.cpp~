#include <vector>
#include <string>
using namespace std;

bool solution1(string s){
	string comp;
	for(string::iterator it = s.begin(); it!=s.end();++it){
		if(*it == '(' || *it == '{' || *it == '['){
			comp.push_back(*it);			
		}else if(*it == ')'){
			if(comp.back() != '(') return false;
			if(comp.empty()) return false;
			comp.pop_back();		
		}else if(*it == ']'){
			if(comp.back() != '[') return false;
			if(comp.empty()) return false;
			comp.pop_back();		
		}else if(*it == '}'){
			if(comp.back() != '{') return false;
			if(comp.empty()) return false;
			comp.pop_back();		
		}
	}
	if(comp.empty()) return true;
}

int main(){
	cout<<solution1("(()})")<<endl;
	return 0;
}
