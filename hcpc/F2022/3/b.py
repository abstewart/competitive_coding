import sys

#toks = (token for token in sys.stdin.read().split())
inp = int(sys.stdin.read())

remainder = inp % 4
if remainder == 0:
    print (inp + 2)
elif remainder == 1:
    print(inp + 1)
elif remainder == 2:
    print(inp)
elif remainder == 3:
    print(inp + 3)
