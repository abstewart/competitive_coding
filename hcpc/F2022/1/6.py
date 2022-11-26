import sys
nbut, nbulb = list(map(int, sys.stdin.readline().split()))

bulblist = set(range(1, nbulb+1))

#print(bulblist)

for n in range(nbut):
    tmp = list(map(int, sys.stdin.readline().split()))
    tmp.pop(0)
    tmp = set(tmp)
    for a in tmp:
        bulblist.discard(a)
if len(bulblist) == 0:
    print("YES")
else:
    print("NO")
