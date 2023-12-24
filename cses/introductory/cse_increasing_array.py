n = int(input())
count = 0
arr = list(map(int, input().split()))
for k in range(len(arr)-1):
    if arr[k] > arr[k+1]:
        dif = arr[k] - arr[k+1]
        arr[k+1] += dif
        count += dif
print(count)    


        
