import sys
v, a, b, c = list(map(int, sys.stdin.readline().split()))

li = (a, b, c)
curr = 0
ans = ("F", "M", "T")
#print(li)
while v >= 0:
    #print(li[curr], ans[curr])
    v = v - li[curr]
    if v < 0:
        print(ans[curr])
        break
    curr += 1
    curr = curr % 3
