import numpy as np;

def maxx(x):
    mx = 0;
    for i in range(len(x)):
        if(x[i]>mx):
            mx = x[i] 
    return mx ;
def minn(x):
    mi = 999999;
    for i in range(len(x)):
        if(x[i]<mi):
            mi = x[i] 
    return mi ;

for hh in range(int(input())):
    r,c = map(int,input().split())
    diff = 0 ;
    ans = 0 ;
    arr = []
    for i in range(r):
           arr.append(list(map(int,input().split())))
    # print(arr)
    for j in range(r):
        ma = maxx(arr[j])
        mi = minn(arr[j]) 
        # print(ma) 
        # print(mi) 
        diff = ma - mi 
        ans = max(ans , diff)
    print(ans) 