# https://www.codechef.com/FEB19B/problems/HMAPPY2

from math import gcd

def lcm(a,b):
    # a x b = LCM(a, b) * GCD (a, b)
    return (a*b) / gcd(a,b) 
    
for _ in range(int(input())):
    N, A, B, K = map(int,input().split())
    
    totalSolved = 0
    if not (A/B == 0 or B/A == 0):
        appy, chef, leave = N//A, N//B, N//lcm(A,B)
        totalSolved = appy + chef - 2*leave
    elif A/B == 0:
        appy, chef, leave = 0, N//B, N//A
        totalSolved = chef - leave
    elif B/A == 0:
        appy, chef, leave = N//A, 0, N//B
        totalSolved = appy - leave
    print('Win' if totalSolved >= K else 'Lose')
