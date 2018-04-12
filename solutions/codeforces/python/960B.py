import math

n, k1, k2 = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = [int(math.fabs(A[i] - B[i])) for i in range(n)]

for _ in range(k1):
	i = C.index(max(C))
	if A[i] > B[i]:
		A[i] -= 1
		C[i] -= 1
	elif A[i] < B[i]:
		A[i] += 1
		C[i] -= 1
	else:
		A[i] += 1
		C[i] += 1
	
for _ in range(k2):
	i = C.index(max(C))
	if A[i] > B[i]:
		B[i] += 1
		C[i] -= 1
	elif A[i] < B[i]:
		B[i] -= 1
		C[i] -= 1
	else:
		B[i] += 1
		C[i] += 1

soma = 0
for i in range(n):
	soma += (A[i] - B[i])**2
print(soma)