

def separateNumbers(s:str):
    numbers=[]

    split=[]

    s_numbers=""
    for x in range(len(s)):
        for w in range (x,len(s)):
            s_numbers+=s[w]
            numbers.append(s_numbers)
        nexts=list(map(lambda x: x[1:],numbers[1:]))

        flag=False
        for r in numbers: 
            for u in nexts:
                if (int(u)-int(r)== 1):
                    split.append(r)
                    x+=len(r)
                    flag=True
                    break
        if not flag:
            print("NO") 

    print("YES ")


separateNumbers("91011")

