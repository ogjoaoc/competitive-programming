n = int(input())
j = list(map(int, input().split()))
j = sorted(j)
v = []
for i in range(1, n+1):
    v.append(i)
    
flag = None
for k in range(min(len(v), len(j))):
    if v[k] != j[k]:
        flag = v[k]
        break;

if j[0] == 1 and n == 2:
    print('2')
elif j[0] == 2 and n == 2:
    print('1')
else:
    print(flag)
    