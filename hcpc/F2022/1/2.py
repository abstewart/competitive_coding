import sys
x = int(sys.stdin.readline())
a = int(sys.stdin.readline())
b = int(sys.stdin.readline())

#print(x, a, b)
tmp = x - a
#print(tmp)
tmp2 = tmp % b
print(tmp2)

