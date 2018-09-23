#include <iostream>
#include <string>

using namespace std;

string solution(int n){
	string res = "1";
	string comp = "1";
	char cToComp = '1';
	int count = 0;
	for(int i = 1; i<n; ++i){
		comp = res;
		res.clear();
		cToComp = comp[0];
		for(int j = 0; j<comp.length(); ++j){
			if(comp[j] == cToComp) count++;
			if(j+1 >= comp.length()){
				res.push_back(count + '0');
				res.push_back(cToComp);
				count = 0;
			}else if(comp[j+1]!=cToComp){
				res.push_back(count + '0');
				res.push_back(cToComp);
				count = 0;
				cToComp = comp[j+1];
			}
		}
	}
	return res;
}

int main(){
	for (int i = 1; i < 10; ++i)
	{
		cout<<solution(i)<<endl;
	}
	return 0;
}
