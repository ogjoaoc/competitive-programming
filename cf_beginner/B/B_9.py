n = int(input())
for t in range(n):
    count = 0
    n = int(input())
    while n != 1 and count < 100:
        if n % 6 == 0:
            n = n/6
            count += 1
        else:
            n = n*2
            count += 1
    if count != 100:
        print(int(count))
    else:
        print("-1")
