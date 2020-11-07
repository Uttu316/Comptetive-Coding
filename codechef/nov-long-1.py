def checkIsAllSame(l):
    isSame = True
    for i in l:
        if i!=l[0]:
            isSame = False
    return isSame        
t = int(input())

for _ in range(t):
    n =  int(input())
    l = list(map(int,input().split()))
    if(n ==1):
        print(l[0])
        continue
    if(n==2):
        print(max(l))
        continue
    else:
        isAllSame = checkIsAllSame(l)
        if(isAllSame):
            if(n%2==0):
                print((n//2)*l[0])
            else:
                print((n//2)*l[0]+l[0])
        else:
            sL = sorted(l,reverse=True)
            ans = 0
            for i in range(1,n):
                a = sL[i]
                b = sL[i-1]
                if(b==0 and i==n-1):
                    ans+=a
                    break
                if(b==0 and i!=n-1):
                    continue
                ans+=min(a,b)
                
                sL[i] = abs(a-b)
                if(i==n-1):
                    ans+=sL[i]
                    
            print(ans)    
                
                
                
