
def merge(V,A, l,r):
	pass

def mergSort(V,A,l,r):
	if(l==r):
		return
	mergSort(V,A,l,(l+r)/2)
	mergSort(V,A,(l+r)/2,r)
	merge(V,A,l,r)	
	pass

def mergesort(V):
	lenghtVector = len(V)
	A = [0]*len(lenghtVector)
	mergeSort(V, A, 0, lenghtVector-1)
	pass
