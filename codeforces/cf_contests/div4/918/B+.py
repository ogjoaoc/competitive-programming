# well made 

t = int(input())
s = 'ABC'
while(t != 0):
    for i in range(3):
        r = list(input())
        for j in s:
            if j not in r:
                print(j)
    t -= 1