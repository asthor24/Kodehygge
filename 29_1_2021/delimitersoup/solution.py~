opp = { '(' : ')', '[' : ']', '{' : '}'}
l = int(input())
s = input()
stack = []
for i, c in enumerate(s):
    if c == ' ':
        continue
    if c in opp.keys():
        stack.append(c)
    elif len(stack) == 0:
        print(c, i)
        exit(0)
    else:
        top = stack[len(stack) - 1]
        if c == opp[top]:
            stack.pop()
        else:
            print(c, i)
            exit(0)
print("ok so far")
