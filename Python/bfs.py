def search(graph, visit, init):
	queue = [init]
	while (len(queue)!=0):
		print queue
		g = queue.pop(0)
		visit[g-1] = True
		for cur in graph[g]:
			if visit[cur-1]==False:
				visit[cur-1] = True
				queue.append(cur)
	pass

def main():
	test_graph = {
		1: [5,7],
		2: [1,7],
		3: [1,6],
		4: [3,5],
		5: [8],
		6: [4,5],
		7: [5],
		8: [6,7]
	}
	v = [False]*len(test_graph)

	search(test_graph, v, 1)
	pass

if __name__ == '__main__':
	main()