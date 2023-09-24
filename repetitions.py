s = list(input())
m = 0
cnt = 0

for i in range(len(s)-1):
    if s[i] == s[i+1]:
        cnt += 1
        if cnt >= m:
            m = cnt
    elif s[i] != s[i+1]:
        cnt = 0
print(m+1)