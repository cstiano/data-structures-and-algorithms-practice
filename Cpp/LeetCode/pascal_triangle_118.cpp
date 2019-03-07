#include <bits/stdc++.h>

int main(){

	int numRows = 5;	
	
	std::vector<std::vector<int>> result;
        //if(numRows = 0) return result;
        std::vector<int> v(1,1);
        result.push_back(v);
        //if(numRows == 1) return result;
        std::vector<int> v2(2,1);
        result.push_back(v2);
        //if(numRows == 2) return result;
        
        for(int i=1; i<numRows-1; i++){
            result.push_back(v);            
	     for(int j = 0; j<result[i].size(); ++j){
                 if(j==result[i].size()-1) result[i+1].push_back(1);
                 else result[i+1].push_back(result[i][j]+result[i][j+1]);
             }        
        }
        
	for(int i=0; i<result.size(); ++i){
		for(int y : result[i])
			std::cout<<y<<" ";
		std::cout<<std::endl;	
	}

	return 0;
}
