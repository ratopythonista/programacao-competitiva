import math
while(True):
	try:
		numPalavra, numLinhas, numCaractere = map(int, input().split())
		aux = input().split()	
	except:
		break		
	texto = []
	for i in aux:
		texto.append(i)
		texto.append(' ')
	texto.pop()			
	usado = 0
	quantLinha = 0
	quantPagina = 1
	for i in texto:	
		if(usado+len(i)<=numCaractere):			
			usado += len(i)
		else:
			if(i!=' '):
				usado = 0
				quantLinha +=1
				usado += len(i)
				if(quantLinha==numLinhas):
					quantLinha = 0
					quantPagina +=1
	print(quantPagina)
				
				
	
	
				
		
