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
	
	int temp_size = 0;
	for(int i=0; i<str1.length();i++){
		temp_size = str2.length();
		str2.erase(remove(str2.begin(),str2.end(), str1.at(i)),str2.end());
		if(temp_size == str2.length()) break;
	}
	if(str2.length() == 0) return true;
	else return false;
}

int main(){
	cout<<"Res1: "<<solution1("abc","bcac")<<endl;
	cout<<"Res2: "<<solution2("abc","bca")<<endl;
	return 0;
}