import sys
toks = (token for token in sys.stdin.read().split())
n = int(next(toks))

stones = []
for _ in range(n):
    stones.append(int(next(toks)))
nq = int(next(toks))

#normal prefix sums
psums = [0]
acc = 0
for i in stones:
    acc += i
    psums.append(acc)
#print(psums)
#sorted prefix sums
stones.sort()
spsums = [0]
acc = 0
for i in stones:
    acc += i
    spsums.append(acc)
#print(spsums)
for _ in range(nq):
    n1 = int(next(toks))
    n2 = int(next(toks))
    n3 = int(next(toks))
    if n1 == 1:
        print(psums[n3] - psums[n2 - 1])
    else:
        print(spsums[n3] - spsums[n2 - 1])
    
