import sys
toks = (token for token in sys.stdin.read().split())

grid_num = int(next(toks))
print(grid_num)

def createGrid(l):
    #print(l)
    cells = [x for x in l]
    #print(cells)
    ans = list()
    for i in range(3):
        inner = list()
        for j in range(3):
            inner.append(cells.pop(0))
        ans.append(inner)
    return ans

def isReachable(grid):
    x = 0
    o = 0
    #count the number of x's and o's
    #should either be the same number of both, or x has 1 more
    for a in grid:
        for b in a:
            if b == 'X':
                x += 1
            elif b == 'O':
                o += 1
    print(x)
    print(o)
    if x == o or x == (o+1):
        return True
    else:
        return False

g1 = createGrid(next(toks))
g2 = createGrid(next(toks))
g3 = createGrid(next(toks))
g4 = createGrid(next(toks))

print(isReachable(g1))
print(isReachable(g2))
print(isReachable(g3))
print(isReachable(g4))
        
    
