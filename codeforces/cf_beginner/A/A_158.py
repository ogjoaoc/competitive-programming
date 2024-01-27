n, k = input().split()
n = int(n)
k = int(k)
t = list(map(int, input().split()))
cnt = 0

for i in t:
    if i >= t[k-1] and i > 0:
        cnt += 1

print(cnt) 