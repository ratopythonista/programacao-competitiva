from collections import deque

def bfs(start):
	fila = deque()
	dist[start] = 0
	fila.append(start)
	while fila:
		v = fila.popleft()
		for w in graph[v]:
			if dist[i] == -1:
				dist[w] = dist[v] + 1
				fila.append(w)

verticies, arestas = map(int, input().split())

#initialize distance
dist = {}
for i in range(verticies):
	dist[i] = -1

#initialize graph
graph = {}
for i in range(verticies):
	graph[i] = set()

#Populate graph
for _ in range(arestas):
	v, w = map(int, input().split())
	graph[v].add(w)
	graph[w].add(v) #if bidirecional

#do what you want
bfs(0)
print(dist)