while True:
    try:
        a, b = [int(x) for x in input().strip().split(" ")]
        ans = a ^ b
        print(ans)
    except EOFError:
        break