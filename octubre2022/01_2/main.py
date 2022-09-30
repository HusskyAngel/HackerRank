
def get_options(s:str):
    return (s[0],s[2])

def get_text(s:str):
    return s[4:]

def combine(s:str):
    aux_return=""
    for x in s:
        if x==" ":
            continue 
        aux_return +=x
    return  aux_return

def split(s:str):
    aux_return=""
    for x in s:
        if x.istitle():
            aux_return+=" "+x
            continue
        aux_return+=x
    if aux_return[0]==" ":
        aux_return=aux_return[1:]
    return aux_return

def camel_case_combine(s:str,option:str):
    aux_return=s
    if  option=="M":
        aux=""
        flag=False
        for x in aux_return:
            if flag:
                aux+=x.upper()
                flag=False
                continue
            if  x==" ":
                flag=True
            aux+=x
        aux_return=aux+"()"
    elif option=="C":
        aux=""
        flag=False
        for x in aux_return:
            if flag:
                aux+=x.upper()
                flag=False
                continue
            if  x==" ":
                flag=True
            aux+=x
        aux_return=aux[0].upper()+aux[1:]
    elif option=="V":
        aux=""
        flag=False
        for x in aux_return:
            if flag:
                aux+=x.upper()
                flag=False
                continue
            if  x==" ":
                flag=True
            aux+=x
        aux_return=aux
    return combine(aux_return)

def camel_case_split(s:str,option:str):
    aux_return=split(s)
    if  option=="M":
        aux_return=aux_return[:-2]
        aux_return=aux_return.lower()
    elif option=="C" or option=="V":
        aux_return=aux_return.lower()
    return aux_return


def operate(entrada):
    f_option,s_option=get_options(entrada)
    if f_option=="S":
        print(camel_case_split(get_text(entrada),s_option))
    elif f_option=="C":
        print(camel_case_combine(get_text(entrada),s_option))

   
a=input()
b=input()
c=input()
d=input()
words=[a,b,c,d]
for y in words:
    operate(y)
