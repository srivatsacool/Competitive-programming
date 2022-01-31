         
for xy in range(int(input())):
    temp1 = list(input())
    temp2 = list(input())
    # print(temp1)
    # print(temp2)
    value = True 
    count1 = 0
    count2 = 0
    for i in range(len(temp1)):
        if(temp1[i]==temp2[i] or temp1[i] == '?' or temp2[i]=='?'):
            continue;
        else:
            value = False
            break;
    if(value):
        print("Yes")    
    else:
        print("No")            
               
            
    
            
        