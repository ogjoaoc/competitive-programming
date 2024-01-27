a, b = input().split(" ")
a = int(a)
b = int(b)
while True:
    n = int(input())
    saida = ""
    if n % a == 0:
        saida += "foo"
        if n % b == 0:
            saida += "bar"
            print(saida)
        else:
            print(saida)
    else:
        if n % b == 0:
            print("bar")