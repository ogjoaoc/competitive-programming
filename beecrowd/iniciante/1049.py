p1 = input()
if p1 == "vertebrado":
    p2 = input()
    if p2 == "ave":
        p3 = input()
        if p3 == "carnivoro":
            print("aguia")
        elif p3 == "onivoro":
            print("pomba")
    elif p2 == "mamifero":
        p3 = input()
        if p3 == "onivoro":
            print("homem")
        elif p3 == "herbivoro":
            print("vaca")

elif p1 == "invertebrado":
    p2 = input()
    if p2 == "inseto":
        p3 = input()
        if p3 == "hematofago":
            print("pulga")
        elif p3 == "herbivoro":
            print("lagarta")
    elif p2 == "anelideo":
        p3 = input()
        if p3 == "hematofago":
            print("sanguessuga")
        elif p3 == "onivoro":
            print("minhoca")
    

