import sys

toks = (token for token in sys.stdin.read().split())
n = int(next(toks))

trees = []
nuts = 0
for _ in range(n):
    tree = int(next(toks))
    if tree > 10:
        nuts += tree - 10
print(nuts)

