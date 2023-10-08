n = int(input())
list = []
list.append(n)
while True:
    if n == 1:
        break
    else:
        if n % 2 == 0:
            n = n / 2
            list.append(int(n))
        else:
            n = (n*3) + 1
            list.append(int(n))

for i in range(len(list)):
    print(list[i], end=' ')
