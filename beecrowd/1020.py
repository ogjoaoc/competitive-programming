n = int(input())
anos = n//365
n = n - anos*365

meses = n//30
n = n - meses*30

dias = n

print(f'{anos} ano(s)')
print(f'{meses} mes(es)')
print(f'{dias} dia(s)')