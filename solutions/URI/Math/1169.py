ct = int(input())
while(ct>0):
	num = int(input())
	print((((2**num)-1)//12)//1000, 'kg')	
	ct-=1
