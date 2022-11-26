import sys

toks = (token for token in sys.stdin.read().split())
nc = int(next(toks))

first = int(next(toks))
shift = first * -1
#print(shift)
cities = []
cities.append(first + shift)
    
for _ in range(nc - 1):
    cities.append(int(next(toks)) + shift)
largest = cities[-1]
#print(cities)
tmp1 = []
print(cities[1], cities[-1])
for a in range(1, len(cities)-1):
    tmp = []
    b = cities[a]
    tmp.append(b)
    tmp.append(b - cities[a-1])
    tmp.append(cities[a+1] - b)
    tmp.append(largest - b)
    print(min(tmp), max(tmp))
print(cities[-1] - cities[-2], cities[-1])
