MAX = 100005 #max vertices

#initialize graph
graph = {}
for i in range(MAX):
	graph[i+1] = set()

#visited set
visited = set()

#dfs implementation with stack
def dfs(start):
	stack = [start]
	while stack:
		vertex = stack.pop()
		if vertex not in visited:
			visited.add(vertex)
			stack.extend(graph[vertex] - visited)

vertices, arestas = map(int, input().split())

#fill graph
for _ in range(arestas):
	inicio, fim = map(int, input().split())
	graph[inicio].add(fim)
	graph[fim].add(inicio) #if is multi directed

#Play with dfs