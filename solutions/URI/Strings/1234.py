while(True):
	try:
		texto = list(input())
	except:
		break
	j = 0
	for i in texto:
		if(i!=' '):
			if(j%2==0):
				print(i.upper(), end='')
				j = j+1
			else:
				print(i.lower(), end='')
				j = j+1
		else:
			print(' ', end='')
	print('')
	
	
	


