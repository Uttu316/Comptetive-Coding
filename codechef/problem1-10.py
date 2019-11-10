
t =int(input())
for _ in range(t):
    D = list(map(int,input().rstrip().split()))
    x =D[0]
    y = D[1]
    d = list(map(int,input().rstrip().split()))
    n = d[0]
    m = d[1]
    k = d[2]
    AB = list(map(int,input().rstrip().split()))
    AB = [[i,j] for i,j in zip(AB[::2], AB[1::2])]
    CD  =list(map(int,input().rstrip().split()))
    CD = [[i,j] for i,j in zip(CD[::2], CD[1::2])]
    EF = list(map(int,input().rstrip().split()))
    EF = [[i,j] for i,j in zip(EF[::2], EF[1::2])]
    print(min(fun(D, AB, CD, EF), fun(D, CD, AB, EF)))
    
