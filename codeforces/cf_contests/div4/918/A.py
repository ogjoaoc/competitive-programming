# using lists

n = int(input())
while (n != 0):
    cnt = 0
    t = list(map(int, (input().split())))
    for i in t:
        if t.count(i) > 1:
            t.remove(i)
            t.remove(i)
    print(t[0])
    n -= 1