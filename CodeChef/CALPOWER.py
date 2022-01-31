for x in range(int(input())):
    total = 0
    n = input()
    fin= ''.join(sorted(n))
    print(fin)
    for i in range(len(fin)):
        print(i+1 , (ord(fin[i]))-96 , fin[i] , "===",((ord(fin[i]))-96 )*(i+1))
        total = total + (ord(fin[i])-96 )*(i+1)
    print(total)   