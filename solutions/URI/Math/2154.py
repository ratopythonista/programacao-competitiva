while(True):
	txt = ''
	try:
		num = input()
	except:
		break
		
	txt   = input()
	txt   = txt.split(' + ')	
	lista = []

	for i in txt:
		ans = i.split('x')
		aux = ''			
		aux+= str(int(ans[0])*int(ans[1])) + 'x'		
		if(int(ans[1])!=2):
			aux+= str((int(ans[1])-1))
		lista.append(aux)
		
	i = 0	
	while(i<len(lista)-1):
		print(lista[i], end=' + ')		
		i+=1		
	print(lista[len(lista)-1])
	
		
			
	
	
	
