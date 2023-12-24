n = int(input())
v = []
ans = []
for i in range(1, n+1):
    v.append(i)
j = 0
k = 0
ans.append(v.pop(0))
while len(v)> 0:
    if abs(ans[j]-v[k-1]) > 1:
        ans.append(v[k])
        j += 1
    k += 1        
print(ans)

    