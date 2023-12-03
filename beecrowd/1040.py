n1, n2, n3, n4 = input().split()
n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
n4 = float(n4)

media1 = (2*n1+ 3*n2+ 4*n3+ n4)/10
media1 = float(media1)
print(f'Media: {media1:.1f}')
if media1 > 6.9:
    print('Aluno aprovado.')
elif media1 < 5.0:
    print('Aluno reprovado.')
elif media1 >= 5.0 and media1 <= 6.9:
    print('Aluno em exame.')
    exame = input()
    exame = float(exame)
    print(f'Nota do exame: {exame}')
    media2 = (media1 + exame) /2
    if media2 >= 5.0:
        print('Aluno aprovado.')
        print(f'Media final: {media2:.1f}')
    else:
        print('Aluno reprovado.') 
