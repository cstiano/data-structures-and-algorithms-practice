def BinaryTreeSearch(x,arr):
	halfArr = len(arr)/2
	# print arr
	# print halfArr
	# print "_________"
	if(halfArr == 0):
		return False
	if x <= arr[halfArr-1]:
		if x == arr[halfArr-1]:
			return True
		else:
			return BinaryTreeSearch(x, arr[:halfArr])
	else:
		if x == arr[halfArr]:
			return True
		else:
			return BinaryTreeSearch(x, arr[halfArr:])

if __name__ == '__main__':
	print BinaryTreeSearch(2,[1,2,3,4,5,6])
	print BinaryTreeSearch(5,[1,2,3,4,5])
	print BinaryTreeSearch(0,[1,2,3,4,5])