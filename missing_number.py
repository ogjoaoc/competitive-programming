n = int(input())
j = list(map(int, input().split()))

a = n*(n+1) // 2 - sum(j)
print(a)