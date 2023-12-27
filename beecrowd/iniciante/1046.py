h_inicio, h_final = map(int, (input().split()))

if h_inicio > h_final or h_inicio == h_final :
    ans = 24 - (h_inicio - h_final)
    print(f'O JOGO DUROU {ans} HORA(S)')

else:
    ans = h_final - h_inicio
    print(f'O JOGO DUROU {ans} HORA(S)')

    