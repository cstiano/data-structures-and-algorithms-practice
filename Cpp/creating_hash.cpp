#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
// g++ --std=c++11
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
	// cout<<states_mapping["1-1"]<<endl;
	int m = 2, n = 2;
	double A[2][2] = {{1.1,2.2},{3.3,4.4}};
	double B[2][2];
	
	ofstream f("matrix.txt");
	for (int i = 0; i < m; i++)
	  {
	  for (int j = 0; j < n; j++)
	    {
	    f << A[i][j]<<" ";
	    }
	  // f << "\n";
	  }
	  f.close();

	ifstream f2("matrix.txt");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++)
		  f2 >> B[i][j];
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++)
			cout<<B[i][j]<<" ";
		cout<<endl;
	}
	f2.close();
	return 0;
}