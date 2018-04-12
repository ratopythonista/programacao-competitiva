ct = int(input())
while(ct>0):
	a, b = list(map(int, input().split()))
	if(a==b):
		print(a)
	else:
		print('1')	
	ct-=1
