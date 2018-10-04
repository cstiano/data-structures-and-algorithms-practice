#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<string> content;
	map<string,int> states_mapping;
	int count = 0;
	for(int i = 0; i<12; ++i){
		for(int j = 0; j<12; ++j){
			// content.push_back(to_string(i)+"-"+to_string(j));
			states_mapping[to_string(i)+"-"+to_string(j)] = count;
			count++;
		}
	}
	// for(vector<string>::iterator it = content.begin(); it!=content.end(); ++it){
	// 	cout<<*it<<endl;
	// }

	// for(map<string,int>::iterator it = states_mapping.begin(); it!=states_mapping.end(); ++it){
	// 	cout<<it->first<<" "<<it->second<<endl;
	// }
	cout<<states_mapping["1-1"]<<endl;
	return 0;
}