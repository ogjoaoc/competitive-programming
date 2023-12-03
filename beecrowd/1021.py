from math import ceil

m = input()
m = float(m)

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

moeda_um = m//1
m = m - moeda_um*1
moeda_um = float('%.2f'% moeda_um)
m = float('%.2f'% m)

moeda_cinquenta = m//0.5
m = m - moeda_cinquenta*0.5
moeda_cinquenta = float('%.2f'% moeda_cinquenta)
m = float('%.2f'% m)


moeda_vintecinco = m//0.25
m = m - moeda_vintecinco*0.25
moeda_vintecinco = float('%.2f'% moeda_vintecinco)
m = float('%.2f'% m)

moeda_dez = m//0.10
m = m - moeda_dez*0.10
moeda_dez = float('%.2f'% moeda_dez)
m = float('%.2f'% m)

moeda_cinco = m//0.05
m = m - moeda_cinco*0.05
moeda_cinco = float('%.2f'% moeda_cinco)
m = float('%.2f'% m)

moeda_centavo = m * 100
moeda_centavo = float('%.2f'% moeda_centavo)
m = float('%.2f'% m)


print('NOTAS:')
print(f'{int(cem)} nota(s) de R$ 100.00')
print(f'{int(cinquenta)} nota(s) de R$ 50.00')
print(f'{int(vinte)} nota(s) de R$ 20.00')
print(f'{int(dez)} nota(s) de R$ 10.00')
print(f'{int(cinco)} nota(s) de R$ 5.00')
print(f'{int(dois)} nota(s) de R$ 2.00')
print('MOEDAS:')
print(f'{int(moeda_um)} moeda(s) de R$ 1.00')
print(f'{int(moeda_cinquenta)} moeda(s) de R$ 0.50')
print(f'{int(moeda_vintecinco)} moeda(s) de R$ 0.25')
print(f'{int(moeda_dez)} moeda(s) de R$ 0.10')
print(f'{int(moeda_cinco)} moeda(s) de R$ 0.05')
print(f'{int(moeda_centavo)} moeda(s) de R$ 0.01')
