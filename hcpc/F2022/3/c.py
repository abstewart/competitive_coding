import sys

#toks = (token for token in sys.stdin.read().split())
inp = int(sys.stdin.read())
print(100 - (inp % 100))
