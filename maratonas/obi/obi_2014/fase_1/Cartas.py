v = [int(x) for x in input().split(" ")]

c = True
d = True

for i in range(len(v)-1):
    if (v[i] < v[i+1]):
        d = False
    elif (v[i] > v[i+1]):
        c = False
        
if (not d and not c):
    print("N")
elif (c and not d):
    print("C")
else:
    print("D")
    
