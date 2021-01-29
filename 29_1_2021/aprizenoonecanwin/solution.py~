n, x = map(int,input().split())
l = list(map(int,input().split()))
l.sort()
count = 1
for i in range(1, n):
    if l[i] + l[i - 1] <= x:
        count += 1
    else:
        break
print(count)
