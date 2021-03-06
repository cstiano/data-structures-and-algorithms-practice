#include <iostream>
#include <string>
#include <map>
using namespace std;

int solution1(string s)
{
	map<char,int> symbols;
	symbols.insert(pair <char,int> ('I', 1));
	symbols.insert(pair <char,int> ('V', 5));
	symbols.insert(pair <char,int> ('X', 10));
	symbols.insert(pair <char,int> ('L', 50));
	symbols.insert(pair <char,int> ('C', 100));
	symbols.insert(pair <char,int> ('D', 500));
	symbols.insert(pair <char,int> ('M', 1000));

	int pre_sum = 0, sub=0;	
	for(int i = 0; i<s.length(); ++i)
	{
		if(i+1<s.length())
		{
			if(symbols[s[i]]>=symbols[s[i+1]])
			{
				pre_sum += symbols[s[i]]-sub;
				sub = 0;
			}
			else
			{
				if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')) sub = 1;
				else if	(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')) sub = 10;
				else if	(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')) sub = 100;
				else {
					pre_sum += symbols[s[i]]-sub;
					sub = 0;
				}
			}		
		}
		else{
			pre_sum += symbols[s[i]]-sub;		
		}			
	}
	return pre_sum;
}

int main(){
	//cout<<solution1("LVIII")<<endl;
	cout<<solution1("MCMXCIV")<<endl;
	return 0;
}
