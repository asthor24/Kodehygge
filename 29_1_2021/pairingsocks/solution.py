n = int(input())
l = list(map(int, input().split()))
aux = []
for sock in reversed(l):
    if len(aux) == 0 or sock != aux[len(aux) - 1]:
        aux.append(sock)
    else:
        aux.pop()
if len(aux) == 0:
    print(2 * n)
else:
    print("impossible")

