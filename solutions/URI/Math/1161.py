def fat(n):	
	if(n==0):
		return 1
	else:
		return n*fat(n-1)
		
while(True):
	try:
		a, b = list(map(int, input().split()))
		print(fat(a) + fat(b))
	except:
		break
