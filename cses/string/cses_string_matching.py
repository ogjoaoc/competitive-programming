s = input()
p = input()
cnt = 0
original_len = len(s)
if p in s:
    test_str = s.replace(p, '')
    post_len = len(test_str)
    ans = (original_len - post_len)/ len(p) 
    print(int(ans))
else:
    print("0")