acentos, prog, atlet = map(int, input().split())
onibus = input()

anterior = "judge"
qtd = 0
for cadeira in onibus:
	if cadeira == '*':
		anterior = "judge"		
		continue
	if anterior == "judge" or anterior == "empty":
		if prog > atlet:
			if prog > 0:
				prog -= 1			
				anterior = "prog"
				qtd += 1
		else:
			if atlet > 0:
				atlet -= 1			
				anterior = "atlet"
				qtd += 1
	elif anterior == "prog":
		if atlet > 0:
			atlet -= 1			
			anterior = "atlet"
			qtd += 1
		else:
			anterior = "empty"
	else:
		if prog > 0:
			prog -= 1			
			anterior = "prog"
			qtd += 1
		else:
			anterior = "empty"
	

print(qtd)