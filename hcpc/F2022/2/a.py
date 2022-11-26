import sys

toks = (token for token in sys.stdin.read().split())

n = int(next(toks))
q = int(next(toks))

lst = []
for _ in range(n):
    cur_num = int(next(toks))
    lst.append(cur_num)

queries = []
for _ in range(q):
    left_index = int(next(toks))
    right_index = int(next(toks))
    queries.append((left_index, right_index))

#calc prefix sums
psum = [0]
acc = 0
for a in lst:
   acc += a
   psum.append(acc)

#print(psum)

for li, ri in queries:
    ris = psum[ri]
    ans = ris - psum[li - 1]
    print(ans)


#old stuff
#n, q = list(map(int, sys.stdin.readline()))

#nums = list(map(int, sys.stdin.readline()))

#calc prefix sums
#process the queries
