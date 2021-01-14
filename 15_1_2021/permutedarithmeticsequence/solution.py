n = int(input())

def isarithmetic(sequence):
    diff = sequence[0] - sequence[1]
    for i in range(1, len(sequence) - 1):
        newdiff = sequence[i] - sequence[i+1]
        if newdiff != diff:
            return False
    return True

for _ in range(n):
    sequence = list(map(int,input().split()))[1:]
    if isarithmetic(sequence):
        print("arithmetic")
        continue
    sequence.sort()
    if isarithmetic(sequence):
        print("permuted arithmetic")
        continue
    print("non-arithmetic")
