n,m,k= map(int,input().split())
ans= 0
for _ in range(n):
    l = list(map(int,input().split()))
    kt = l[:-1]
    q =l[-1]
    if(sum(kt)>=m and q<=10):
        ans+=1
    else:
        continue
print(ans) 
