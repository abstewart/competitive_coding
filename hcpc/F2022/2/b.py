#breed counting problem
import sys
#a, b = list(map(int, sys.stdin.readline()))

toks = (token for token in sys.stdin.read().split())

n = int(next(toks))
q = int(next(toks))

bids = []
for _ in range(n):
    bids.append(int(next(toks)))

queries = []
for _ in range(q):
    queries.append((int(next(toks)), int(next(toks))))

#calc prefix sums
psums = [(0, 0, 0)]

bh = 0
bg = 0
bj = 0
for a in bids:
    if a == 1:
        bh += 1
    elif a == 2:
        bg += 1
    elif a == 3:
        bj += 1
            
    psums.append((bh, bg, bj))

#print(psums)
for li, ri in queries:
    sr = psums[ri]
    sl = psums[li - 1]

    print(sr[0] - sl[0], sr[1] - sl[1], sr[2] - sl[2])
       
