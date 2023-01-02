
def soma_matrizes(A,B):
    C = [[],[]]
    if(len(A[0])==len(B[0]) and len(A)==len(B)):
        for i in range(0,len(B)):
            for j in range(0,len(B[i])):
                C[i].append(A[i][j]+B[i][j])
        return C
    else:
        print("Matrizes de ordens diferentes. Não podem ser somadas")
A = [[1,2,3,4],[1,2,3,4]]
B = [[1,2,3,4],[1,2,3,4]]
C = soma_matrizes(A,B)
print(C)