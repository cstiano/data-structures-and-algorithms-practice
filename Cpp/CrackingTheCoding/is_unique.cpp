#include <iostream>
#include <string>
using namespace std;

bool
CompHash(char c, char comp[], int key){
	if(comp[key] != 0){
		if(comp[key]!=c){
			//necessary to compare the len of the string here
			return CompHash(c,comp,key+1);
		}else{
			return false;
		}
	}else{
		comp[key] = c;
		return true;
	}
}

int main(){
	string str ("Test string");
	cout<<str.size()<<endl;
	char hashLetters[str.size()];
	if( hashLetters[0] == 0) cout<<"dale"<<endl;
	for(string::iterator it = str.begin(); it!=str.end(); ++it){
		cout<<*it<<endl;
		if(!CompHash(*it,hashLetters,*it)){
			cout<<"Not Unique"<<endl;
			break;
		}
	}
	return 0;
}