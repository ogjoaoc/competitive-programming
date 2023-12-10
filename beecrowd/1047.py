h_inicio, m_inicio, h_final, m_final = map(int, (input().split()))

inicio_total = h_inicio * 60 + m_inicio
final_total = h_final * 60 + m_final

ans = inicio_total - final_total
if inicio_total > final_total:
    horas = 24 - (ans / 60) 
    minutos = 60 - (ans % 60)

elif inicio_total == final_total:
    horas = 24 - (ans / 60) 
    minutos = 0 - (ans % 60)
    
else:
    ans = final_total - inicio_total
    horas = ans / 60
    minutos = ans % 60

print(f'O JOGO DUROU {int(horas)} HORA(S) E {minutos} MINUTO(S)')
