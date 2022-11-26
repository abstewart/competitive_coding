import sys

toks = (token for token in sys.stdin.read().split())

types = int(next(toks))
choc = []
for a in range(types):
    choc.append(int(next(toks)))

choc.reverse()

curr = 1000000000
for b in range(len(choc)):
    #print(curr)
    it = choc[b]
    
    if it < curr:
        curr = it
    else:
        tmp = min(it, curr)
        choc[b] = max(tmp - 1, 0)
        curr = choc[b]
#print(choc)
print(sum(choc))
