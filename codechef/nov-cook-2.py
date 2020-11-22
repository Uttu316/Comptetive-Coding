def fun(a, b,n):
    ans=0 
    for i in range(0,n):
        if(a[i]!=b[i]):
            if a[i+2]==b[i+2]:
                ans+=1
    return ans    
 
    
    
t = int(input())
for _ in range(t):
    a = input()+"00"
    b = input()+"00"
    
    if(a==b):
        print(0)
        continue
    else:
       
        l = len(a)
        n = 0
        x = fun(a,b,l)
        print(x)
           
                    
                

