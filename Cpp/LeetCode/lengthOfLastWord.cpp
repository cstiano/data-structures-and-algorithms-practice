#include <string>
#include <iostream>

using namespace std;

int lenghtOfLastWord(string s){
	int count = 0;
	bool state = false;
	if(s.empty()) return 0;	
	for(int i = s.length()-1; i>=0; --i){
		if(s[i]!=' ') state = true;		
		if(state){
			if(s[i] == ' ') return count;
			else count ++;
		}			
	}
	return count;
}

int main(){
	cout<<lenghtOfLastWord("a   ")<<endl;
	return 0;
}
