import sys

toks = (tok for tok in sys.stdin.read().split())


def binarySearch(array, x):
    low = 0
    high = len(array)
    while low < high:
        mid = (low + high) // 2
        curr = array[mid]
        #print(low, high, mid, curr)
        if curr >= x:
            high = mid
        elif curr < x:
            low = mid + 1
    return high
"""
arr = [2, 4, 7, 7, 9]
7, 10, 4, 2
arr = [3, 5, 10, 10, 20, 100]
print(binarySearch(arr, 2))
print(binarySearch(arr, 3))
print(binarySearch(arr, 4))
print(binarySearch(arr, 9))
print(binarySearch(arr, 10))
print(binarySearch(arr, 1000))
"""

N = int(next(toks))
Q = int(next(toks))

arr = []
for i in range(N):
    next_num = int(next(toks))
    arr.append(next_num)
#print(N, Q, arr)

for j in range(Q):
    query = int(next(toks))
    #print(query)
    i = binarySearch(arr, query)
    #print(i)
    if i < N and arr[i] == query:
        print(i)
    else:
        print(-1)

