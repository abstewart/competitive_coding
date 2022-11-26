import sys
#regular input, if want a number need to do int(sys.stdin.readline())
our_in = sys.stdin.readline()
#multiple inputs on one line, get them, split,
#then turn them into ints, then put in a list
in2 = list(map(int, sys.stdin.readline().split()))
