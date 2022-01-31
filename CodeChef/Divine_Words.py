div = list(input())
# print(div)
for xy in range(int(input())):
    va = True 
    tem = list(input())
    # print(tem)
    for i in range(len(tem)):
        if(tem[i] not in div):
            va = False
    if  (va):
        print("Yes")
    else:
        print("No")     