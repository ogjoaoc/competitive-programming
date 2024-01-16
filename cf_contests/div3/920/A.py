n = int(input())
while (n != 0):
    x1, y1 = input().split()
    x2, y2 = input().split()
    x3, y3 = input().split()
    x4, y4 = input().split()
    
    x1 = int(x1)
    x2 = int(x2)
    x3 = int(x3)
    x4 = int(x4)
    
    y1 = int(y1)
    y2 = int(y2)
    y3 = int(y3)
    y4 = int(y4)
    
    if (x1 == x2):
        r = abs(y1-y2)
        print(r*r)
    elif (x1 == x3):
        print(abs(y1-y3))*(abs(y1-y3));
    else:
        print(abs(y1-y4))*(abs(y1-y4));
    

    if (x2 == x3):
        print(abs(y3-y2))*(abs(y3-y2));
    elif (x2 == x4):
        print(abs(y4-y2))*(abs(y4-y2));
     

    if (x4 == x3):
        print(abs(x4-x3))*(abs(x4-x3));
    
    if (y1 == y2):
        print(abs(x1-x2))*(abs(x1-x2));
    elif (y1 == y3):
        print(abs(x1-x3))*(abs(x1-x3));
    else:
        print(abs(x1-x4))*(abs(x1-x4));
    

    if (y2 == y3):
        print(abs(x3-x2))*(abs(x3-x2));
    elif (y2 == y4):
        print(abs(x4-x2))*(abs(x4-x2));
     

    if (y4 == y3):
        print(abs(x4-x3))*(abs(x4-x3));
        
    
    n-= 1