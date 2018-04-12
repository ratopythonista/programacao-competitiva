texto = input()
pos_a = texto.find('a')
pos_b = texto.find('b')
pos_c = texto.find('c')

if texto[pos_b:].count('a') > 0 or texto[pos_c:].count('a') > 0 or texto[pos_c:].count('b') > 0:
	print('NO')
elif -1 < pos_a < pos_b < pos_c:
	a = texto.count('a')
	b = texto.count('b')
	c = texto.count('c')
	if a == c or b == c:
		print('YES')
	else:
		print('NO')
else:
	print('NO')