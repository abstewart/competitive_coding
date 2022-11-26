import sys
p1 = list(map(int, sys.stdin.readline().split()))
p2 = list(map(int, sys.stdin.readline().split()))
p3 = list(map(int, sys.stdin.readline().split()))

#print(p1, p2, p3)

xlist = (p1[0], p2[0], p3[0])
ylist = (p1[1], p2[1], p3[1])
xans = p1[0] if xlist.count(p1[0]) == 1 else (p2[0] if xlist.count(p2[0]) == 1 else p3[0])
yans = p1[1] if ylist.count(p1[1]) == 1 else (p2[1] if ylist.count(p2[1]) == 1 else p3[1])

print(xans, yans)

