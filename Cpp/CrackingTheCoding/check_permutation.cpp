#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string sortString(string str){
	sort(str.begin(),str.end()); 
	return str;
}

bool solution1(string str1, string str2){
	if(str1.size()!=str2.size()) return false;
	
	if(sortString(str1).compare(sortString(str2))==0) return true;
	else return false;
}

bool solution2(string str1, string str2){
	if(str1.size()!=str2.size()) return false;

	for(int i=0; i<str1.size();i++){
		
	}
}

int main(){
	cout<<"Res: "<<solution1("abc","bcac")<<endl;
	return 0;
}