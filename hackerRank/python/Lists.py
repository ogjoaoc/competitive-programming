if __name__ == '__main__':
    N = int(input())
    cnt = 0
    aux = []
    numbers = "0123456789"
    while cnt < N:
        item = ""
        t = input()
        if "insert" in t:
            t = list(t)
            for i in t:
                if i in numbers:
                    pos = int(i)
                    t.remove(i)
                    break
            for k in t:
                if k in numbers:
                    item += k
            if item:
                item = int(item)
                aux.insert(pos, item)
        
        elif "append" in t:
            t = list(t)
            for i in t:
                if i in numbers:
                    item += i
            if item:
                item = int(item)
            aux.append(item)
            
        elif "pop" in t:
            aux.pop()
        
        elif "remove" in t:
            t = list(t)
            for i in t:
                if i in numbers:
                    item = int(i)
                    t.remove(i)
                    break
            aux.remove(item)
        
        elif "sort" in t:
            aux.sort()
        
        elif "print" in t:
            print(aux)
            
        elif "reverse" in t:
            aux.reverse()
        
        cnt += 1
                 
            
            