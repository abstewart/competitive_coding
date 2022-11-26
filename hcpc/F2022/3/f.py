import sys

toks = (token for token in sys.stdin.read().split())
h = int(next(toks))
w = int(next(toks))
image = []
for _ in range(h):
    image.append(next(toks))
for a in image:
    print(a)
    print(a)
    
