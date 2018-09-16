#include <iostream>

using namespace std;

bool solution1(int x){
	if(x<0) return false;	
	int compareNumber=0, temp = x, pop;	
	while(temp!=0){
		pop = temp%10;
		temp /=10;
		//Verify overflow
		compareNumber = compareNumber*10 + pop; 
	}
	if(compareNumber == x) return true;
	else return false;
}

int main(){
	cout<<solution1(121)<<endl;
	cout<<solution1(120)<<endl;
	return 0;
}
