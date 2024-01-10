t = int (input())
while (t != 0):
    my_set = set()
    l = int(input())
    string = list(input())
    aux = 0
    if l <= 1:
        print('1')
    else:
        for i in range(l):
            my_set.add(string[i])
            aux += len(my_set)
        print(len(my_set))
        
print(my_set)
        
        
    