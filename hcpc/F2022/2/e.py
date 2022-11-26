#Calc prefix sum list, and reverse prefix sum list, then count how many times the two have the same index in their list
#should be ~O(3n)
import sys
toks = (token for token in sys.stdin.read().split())
n = int(next(toks))

squares = []
for _ in range(n):
    squares.append(int(next(toks)))

#print(squares)

total = sum(squares)
psums = []
rpsums = []
accf = 0
accr = total
for i in range(len(squares) - 1):
    num = squares[i]
    accf += num
    accr -= num
    psums.append(accf)
    rpsums.append(accr)

#print(psums)
#print(rpsums)

ans = 0
for i in range(len(psums)):
    if psums[i] == rpsums[i]:
        ans += 1
print(ans)
