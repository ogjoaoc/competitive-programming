m = int(input())
print(m)
cem = m//100
m = m - cem*100

cinquenta = m//50
m = m - cinquenta*50

vinte = m//20
m = m - vinte*20

dez = m//10
m = m - dez*10

cinco = m//5
m = m - cinco*5

dois = m//2
m = m - dois*2

um = m//1
m = m - um*1

print(f'{cem} nota(s) de R$ 100,00')
print(f'{cinquenta} nota(s) de R$ 50,00')
print(f'{vinte} nota(s) de R$ 20,00')
print(f'{dez} nota(s) de R$ 10,00')
print(f'{cinco} nota(s) de R$ 5,00')
print(f'{dois} nota(s) de R$ 2,00')
print(f'{um} nota(s) de R$ 1,00')