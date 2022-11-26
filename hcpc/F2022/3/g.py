import sys

toks = (token for token in sys.stdin.read().split())
cases = int(next(toks))

for _ in range(cases):
    x = int(next(toks))
    y = int(next(toks))
    n = int(next(toks))

    k = n
    while k >= 0:
        if k % x == y:
            print(k)
            break
        elif k % x > y:
            print(k - ((k % x) - y))
            break
        else:
            k -= (k % x) + 1
