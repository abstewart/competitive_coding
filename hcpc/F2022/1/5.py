import sys
n = int(sys.stdin.readline())
nums = list(map(int, sys.stdin.readline().split()))
alice = 0
bob = 0
aturn = True
for cur in range(n):
    nu = max(nums)
#    print("nu:", nu)
    if aturn:
        alice += nu
    else:
        bob += nu
    nums.remove(nu)
    aturn = not aturn
    #print(nums)
#print(alice)
#print(bob)
print(alice - bob)
