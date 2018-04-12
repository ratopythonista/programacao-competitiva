op = int(input())

while(op>0):
    texto = input()
    count = 0
    pilha = []
    for i in range(len(texto)):
        if(texto[i]=='<'):
            pilha.append(texto[i])
        if(texto[i]=='>' and pilha!=[]):
            pilha.pop()
            count = count +1
    print(count)
    op = op-1
