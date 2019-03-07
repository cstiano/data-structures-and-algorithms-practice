#include <iostream>
using namespace std;

int binarySearch(int A[], int l, int r, int x){
	if(l<=r){
		int mid = l + (r-l)/2;
		
		if(A[mid] == x)
			return mid;
		
		if(A[mid]>x)
			return binarySearch(A, l, mid-1,x);
		
		return binarySearch(A, mid+l, r, x);	
	}

	return -1;
}
