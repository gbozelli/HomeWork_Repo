
def matrixprint(m):
    for i in range(0,len(m)): #Let´s start the code setting a counter that percurs the lines of the matrix
        print("| ",end="")    
        for j in range(0,len(m[0])): #Now, the 'for' loop percurs the columns
            print(" ", m[i][j], end=" ") 
        print(" |") 
    print("The matrix have dimension of",len(m),"X",len(m[0])) 

m = [[1,2],[3,4],[4,5]]
matrixprint(m)
        
    