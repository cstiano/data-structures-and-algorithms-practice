#include <vector>
#include <iostream>

using namespace std;

int main(){
	vector<int> v;
	v.push_back(9);
	v.push_back(8);
	v.insert(v.begin(),10);
	for(vector<int>::iterator it = v.begin(); it!=v.end(); ++it){
		cout<<*it<<endl;	
	}
	return 0;
}
