import sys

#toks = (token for token in sys.stdin.read().split())
n = int(sys.stdin.read())

cake=4
dnt = 7

if (n % 7) % 4 == 0:
    print("Yes")
elif (n % 7) == 0:
    print("Yes")
elif (n % 4) == 0:
    print("Yes")
else:
    print("No")
"""
if n >= 14:
    nn = n % cake
    if nn == 0:
        print("YES")
        exit()
    if nn >= 8:
        if nn % 4 == 0:
            print("YES")
            exit()
    print("NO")
    exit()
if n >= 8:
    if n % dnt == 0:
        print("YES")
        exit
print("NO")
exit()
"""
