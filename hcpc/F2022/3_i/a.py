import sys

toks = (token for token in sys.stdin.read().split())
nc = int(next(toks))

for _ in range(nc):
    li = []
    for __ in range(7):
        li.append(int(next(toks)))
    if sum(li[0:2]) == list[6]:
        print(li[0], li[1], li[2])
    else:
        print(li[0], li[1], li[3])
