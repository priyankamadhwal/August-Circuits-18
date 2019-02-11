# https://www.codechef.com/FEB19B/problems/DEPCHEF

for _ in range(int(input())):
    N, a, d = int(input()), list(map(int,input().split())), list(map(int,input().split()))
    willSurviveDefense = []
    for current in range(N):
        left = current - 1
        if left == -1: left = N - 1
        right = current + 1
        if right == N: right = 0
        if d[current] > a[left] and d[current] > a[right] and d[current] > a[left] + a[right]:
            willSurviveDefense.append(d[current])
    if not willSurviveDefense:
        print(-1)
    else:
        print(max(willSurviveDefense))
