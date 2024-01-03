# this shit got AC ok

n = int(input())
n = n*2

l1 = list(input()) 
l2 = list(input())
l3 = list(input())
l4 = list(input())
able = True

for k in range(4):
    if l1[k] != '.':
        l1[k] = int(l1[k])
    if l2[k] != '.':
        l2[k] = int(l2[k])
    if l3[k] != '.':
        l3[k] = int(l3[k])
    if l4[k] != '.':
        l4[k] = int(l4[k])
            
for i in range(1, 10):
    cnt = 0
            
    for k in range(4):
        if (l1[k] == i):
            cnt += 1
        if (l2[k] == i):
            cnt += 1
        if (l3[k] == i):
            cnt += 1
        if (l4[k] == i):
            cnt += 1
    if cnt > n:
        able = False
        break

if able:
    print('YES')
else:
    print('NO')