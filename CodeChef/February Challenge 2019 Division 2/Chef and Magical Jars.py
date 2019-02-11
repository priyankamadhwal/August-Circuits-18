# https://www.codechef.com/FEB19B/problems/MAGICJAR

for _ in range(int(input())):
    N, A = int(input()), list(map(int, input().split()))
    print(sum([x-1 for x in A])+1)
