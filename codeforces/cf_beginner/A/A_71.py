n = int(input())
for i in range(n):
    l_cnt = 0
    w = input()
    if len(w) < 10:
        print(w)
    else:
        w = list(w)
        for k in range(1, len(w)-1):
            w.pop(1)
            l_cnt += 1
        w.insert(1, str(l_cnt))
        print("".join(w))