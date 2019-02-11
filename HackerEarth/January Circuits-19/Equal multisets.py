N, A, B = int(input()), list(map(int,input().split())), list(map(int,input().split()))
A.sort(), B.sort()
steps = sum([abs(A[i]-B[i]) for i in range(N)])
print(steps%(10**9+7))
