
class Triangulo:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
        list = [a,b,c]
    def sort(self,list):
        for i in range(1,2):
            key = list[i]
            j = i - 1
            while list[j]>key and j>=0:
                j = j - 1
                list[j+1] = list[j]
            list[j+1] = key
        return list
    def test(self,list):
        a = list[0]
        b = list[1]
        c = list[2]
        if(c>a+b):
            print("É triângulo")
        if((c)**2==(a)**2+(b)**2):
            print("É retângulo")
        if(a==c):
            print("É equilátero")
        if(a==b or b==c and a!=c):
            print("É isósceles")
        if(a!=b and b!=c):
            print("É escaleno")
        else:
            print("Não é triângulo")
    def perimeter(self,a,b,c):
        p = a + b + c
        return p

T = Triangulo(2,3,4)
T.a
T.b
T.c
T.test
T1 = Triangulo(4,6,8)