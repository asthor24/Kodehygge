import sys
mem = [-1 for x in range(100001)]
mem[0] = mem[1] = 1
for x in range(2, 100001):
    mem[x] = mem[x-1]+mem[x-2]

n, k = map(int, input().split())
n -= 1
while True:
    if n == 0:
        print("N")
        sys.exit(0)
    if n == 1:
        print("A")
        sys.exit(0)
    if k > mem[n-2]:
        k -= mem[n-2]
        n -= 1
    else:
        n -= 2

