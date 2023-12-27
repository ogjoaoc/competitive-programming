negativos = 0
pares = 0
zeros = 0

for i in range(5):
    n = input()
    if n == "0":
        zeros += 1
        
    if "-" in n:
        negativos += 1
        n = list(n)
        n.remove("-")
        n = "".join(n)
        n = int(n)
        if n % 2 == 0:
            pares += 1
    else:
        n = int(n)
        if n % 2 == 0:
            pares += 1

impares = 5 - pares
positivos = 5 - zeros - negativos

print(f'{pares} valor(es) par(es)')
print(f'{impares} valor(es) impar(es)')
print(f'{positivos} valor(es) positivo(s)')
print(f'{negativos} valor(es) negativo(s)')
