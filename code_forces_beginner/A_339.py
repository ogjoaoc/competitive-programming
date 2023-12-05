n = list(map(int, (input().split("+"))))
n.sort()
cnt = 0
for i in n:
    print(f'{i}', end="")
    cnt += 1
    if cnt < len(n):
        print('+', end="")