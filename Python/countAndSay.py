def solution1(n):
	res = "1"
	number_comp = ''
	count = 0
	for i in range(1,n):
		comp_str  = res
		number_comp = comp_str[0]
		res = ""
		for elem in xrange(len(comp_str)):
			if(comp_str[elem] == str(number_comp)):
				count+=1
			if(elem+1 >= len(comp_str)):
				res+=str(count)
				res+=number_comp
				count = 0
			elif (comp_str[elem+1] != number_comp):
				res+=str(count)
				res+=number_comp
				count = 0
				number_comp = comp_str[elem+1]
		print res
	return res

def main():
	solution1(10)
	pass

if __name__ == '__main__':
	main()