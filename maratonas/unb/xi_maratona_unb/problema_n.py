entrada = list(map(int, input().split()))
m = str(input())
N = 1/entrada[0]
N = str(N)
for i in range(len(N)-1):
    if N[i][i+ entrada[1]] == m[i][i + entrada[1]]:
        print(f'Sim')
    