# Greedy Algorithms #
	Teaching for greedy algorithms
## Practice Problem ##
	
	N light bulbs, connected by a wire
	bulbs are ON or OFF

	Each bulb has its own switch, but flipping also changes state of all blubs to the right of current bulb

	Given initial state of bulb, find the minimum number of switches you have to turn ON all the bulbs
	
## Solutions ##
### Naieve ###

	Go left to right, if off, then turn it on
	O(n^2) because need to mutate the rest of the array
	
### Better ###

	Store a boolean `parity` which tells us if we need to switch or not (based on the number of times we've switched)
	
## What is Greedy? ##
	Apply a rule at every step of the problem that finds a locally optimal solution.
	This finds a globally optimal solution.
	Usually only go over the input once -> fast.

### Example of greedy problem ###
	You have coins of values 1,2,5
	Given a value N, determine the min number of coins that sum to N.
	
	Get the most number of 5 value, then 2, then 1. Until reach N
	
	Greedy works for this problem, but not always for all problems of this type.
	Greedy rule: pick the coin with the largest value < N - sum_so_far
	E.g: 8, 6, 4, 1: N=10
	Greedy would give you: 8+1+1
	Best solution would be: 6+4
	
### Different greedy problems ###
	1,10,25: does't work with greedy, N=30
	1,5,10,25: yes
	1,4,20,25: yes
	1,5,10,15: yes
	1,10,15,20: no N=25
	
### Drawbacks of Greedy ###
	Sometimes there is no greedy solution.
	Even if there is a greedy way to do it, it's hard to be confident it works all the time.
	
### Prove Greedy Algo ###
1. Greedy stays ahead
2. Exchange argument
You learn the above in CS algorithms

Contest: https://vjudge.net/contest/528305
Focus on what greedy rule you are applying to the problem
	
	
	
