def str_reverse(s):
    rvs = ""
    for i in range(len(s)-1, -1,-1):
        rvs += s[i]
    return rvs

a = int(input())
b = int(input())

s = ""
sum = a + b

while ( sum != 0 ):
    if (sum % 10 != 0):
        s += str(sum % 10)
    sum = int(sum / 10)
    
sum = int(str_reverse(s))

new_a = ""
new_b = ""

while (a != 0):
    if (a % 10 != 0):
        new_a += str(a % 10)
    a = int(a/10)
    
while (b != 0):
    if (b % 10 != 0):
        new_b += str(b % 10)
    b = int(b/10)
    
new_a = int(str_reverse(new_a))
new_b = int(str_reverse(new_b))

if (new_a + new_b == sum):
    print("YES")
else:
    print("NO")
