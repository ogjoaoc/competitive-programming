entrada = input()
count_r = 0
count_l = 0
for letra in entrada:
    if letra == "r":
        count_r += 1
    elif letra == "l":
        count_l += 1
        
if count_r >= count_l:
    print("Ta Feio a coisa...")
else:
    print("Bola Ceborinha!")