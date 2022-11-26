import sys
toks = (token for token in sys.stdin.read().split())
n = int(next(toks)) #will be odd, between 1 & 1,000,000
k = int(next(toks)) #number of stacking instructions

tostack = []
for _ in range(k):
    sstack = int(next(toks))
    estack = int(next(toks))
    tostack.append((sstack, estack))

print(tostack)

stacks = [0] * n
print(stacks)

for pair in tostack:
    start = pair[0] - 1
    end = pair[0] - 1
    for 
