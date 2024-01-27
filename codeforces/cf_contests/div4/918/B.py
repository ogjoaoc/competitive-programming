# the real brute force

t = int(input())
s = 'ABC'
while(t != 0):
    ans = ""
    x = list(input())
    y = list(input())
    z = list(input())

    if '?' in x:
        x.remove('?')
    elif '?' in y:
        y.remove('?')
    else:
        z.remove('?')
    
    if len(x) < len(y) and len(x) < len(z):
        for i in s:
            if i not in x:
                ans += i
    elif len(y) < len(x) and len(y) < len(z):
        for i in s:
            if i not in y:
                ans += i
    else:
        for i in s:
            if i not in z:
                ans += i
    print(ans)
    
    t -= 1