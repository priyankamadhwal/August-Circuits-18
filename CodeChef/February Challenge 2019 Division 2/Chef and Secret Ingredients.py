for _ in range(int(input())):
    N = int(input())
    dishes = [input() for _ in range(N)]
    specialIngCount = 0
    dishes[0] = set(dishes[0])
    if len(dishes) == 1:
        specialIngCount = len(dishes[0])
    else:   
        for c in dishes[0]:
            if all([c in S for S in dishes[1:]]):
                specialIngCount += 1
    print(specialIngCount)
