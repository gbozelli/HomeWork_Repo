
def minDeletionSize(strs):
    l = len(strs)
    c = len(strs[0])
    aux = 0
    resp = 0
    for i in range(0,c):
        for j in range(1,l):
            if ord(strs[j][i])>=ord(strs[j-1][i]):
                aux = aux + 1
        if aux == l-1:
            resp = resp + 1
        aux = 0
    return c-resp
strs = ["rrjk","furt","guzm"]
c = minDeletionSize(strs)
print(c)