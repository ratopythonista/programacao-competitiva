while(True):
	try:
		s = input()
	except:
		break
	
	if 'J' in list(s):
		aux = s.split('+')
		ans = int(aux[0])
		aux = aux[1].split('=')
		ans = ans+int(aux[0])
		print(ans)
		
	elif 'L' in list(s):
		ans = int(s.split('=')[1]) - int(s.split('+')[0])	
		print(ans)
		
	else:
		ans = int(s.split('=')[1]) - int(s.split('+')[1].split('=')[0])
		print(ans)
