import sys

def new_makefile_in(in_test):
	check1 = False
	check2 = False
	result_string = []
	with open("Makefile.in") as f:
		with open("Makefile_temp.in", "w") as f1:
			for line in f:
				f1.write(line)
				if "sample_player-bhv_basic_offensive_kick.o" in line:
					check1 = True
				if "sample_player-bhv_basic_offensive_kick.obj" in line:
					check2 = True
				if ("bhv_basic_offensive_kick" in line) and not (check1 or check2):
					f1.write(line.replace("bhv_basic_offensive_kick", in_test))
				if check1:
					result_string.append(line.replace("bhv_basic_offensive_kick", in_test))
				if check2 and (line in ('\n', '\r\n')):
					check1 = False
					check2 = False
					for elem in result_string:
						f1.write(elem)




if __name__ == '__main__':
	print sys.argv[1]
	new_makefile_in(sys.argv[1])
