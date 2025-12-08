frase = "dinarodrigo"
seq_atual = []
seq_maior = []

for i in frase:
    newList = [i]
    seq_atual.append(newList)
    count = 0
    for lista in seq_atual:
        if not i in lista:
            lista.append(i)
        else:
            if len(lista)>len(seq_maior):
                seq_maior = lista
            lista = []
            lista.append(i)
            seq_atual[count] = lista
        count+=1
for lista in seq_atual:
    if len(lista)>len(seq_maior):
        seq_maior = lista


print("A sequencia maior é:",seq_maior)
seq_atual