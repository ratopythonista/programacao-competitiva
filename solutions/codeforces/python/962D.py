tam = int(input())
vet = list(map(int, input().split()))
freq = {}
for i in range(tam):
	num = vet[i]
	while num in freq:
		del freq[num]
		num *= 2
	freq[num] = i
print(len(freq))
print(*list(freq.keys()))    