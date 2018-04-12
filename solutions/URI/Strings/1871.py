while(True):
	a = input().split()
	c = str(int(a[0]) + int(a[1]))
	if(c=='0'):
		break
	else:
		c = list(c)
		for i in c:
			if(i!='0'):
				print(i, end='')
		print('')
