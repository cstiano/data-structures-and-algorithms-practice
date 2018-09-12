#include <string>
#include <cstdio>

// Table of frequency characters
int Frequency[26];

int hashFunc(char c)
{
	return (c-'a');
}

void countFre(string S)
{
	for(int i = 0; i < S.length(); ++i)
	{
		int index = hashFunc(S[i]);
		Frequency[index]++;	
	}
	for(int i = 0; i<26;++i)
	{
		std::cout<< (char)(i+'a')<< ' ' << Frequency[i] << std::endl;	
	}
}

std::vector <string> hashTable_string[20];
int hashTablesize = 20;

void insert(string s)
{
	int index = hashFunc(s);
	hashTable_string[index].push_back(s);
}

void search(string s)
{
	int index = hashFunc(s);
	for(int i = 0; i < hashTable_string[index].size(); ++i)
	{	
		if(hashTable_string[index][i] == s)
		{
			std::cout<< "is found" << std::endl;
			return;
		}	
	}
	std::cout<< "is not found" << std::endl;
}

int main(){
	return 0;
}
