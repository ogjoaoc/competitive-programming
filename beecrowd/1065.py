pares = 0
for i in range(5):
    n = input()
    if "-" in n:
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


print(f'{pares} valores pares')