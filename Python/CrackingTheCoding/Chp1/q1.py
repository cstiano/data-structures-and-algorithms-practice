def resolution1(str):
	hashString = {}
	for c in str:
		if not (c in hashString.keys()):
			hashString[c] = c
		else:
			return False
	return True
		

if __name__ == '__main__':
	print resolution1("dalea")