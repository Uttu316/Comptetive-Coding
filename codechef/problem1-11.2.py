t = int(input())
for _ in range(t):
    d = list(map(int,input().rstrip().split()))
    n = d[0]
    k = d[1]
    l = list(map(int,input().rstrip().split()))
    if (l[0]<k):
        print("NO",1)
        continue
    extra = 0 
    ans  = True
    index = 0
    for i in range(n):
        if ((l[i]+extra)>k):
            extra += l[i]-k
        elif ((l[i]+extra)<k):
            index  = i
            ans = False
            break
    
    if ans==True:
        print("YES")
    else:
        print("NO",index+1)
        
