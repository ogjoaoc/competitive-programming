# problema da mochila
# nao finalizado
# guloso

t = int(input())

c = 0
while c < t:
    ans = 0
    max_blocos, comp = input().split()
    comp = int(comp)
    l = list(map(int, (input().split())))
    pos = len(l)-1

    n = comp % l[pos]
    if n == 0:
        ans = comp / l[pos]
    else:
        ans += comp // l[pos]
        pos = pos-1
        while pos != -1:
            if n % l[pos] == 0:
                ans += n / l[pos]
            else:
                n = n % l[pos]

            pos -= 1            
    
    print(int(ans))
    c += 1
