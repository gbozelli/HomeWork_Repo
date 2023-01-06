
class Triangulo:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
        list = [self.a,self.b,self.c]
    def sort(self, list):
        for i in range(1,2):
            key = list[i]
            j = i - 1
            while list[j]>key and j>=0:
                j = j - 1
                list[j+1] = list[j]
            list[j+1] = key
        return list
    def test(self, list):
        self. self.a = list[0]
        self.self.b = list[1]
        self.self.c = list[2]
        if(self.c>self.a+self.b):
            print("É triângulo")
        if((self.c)**2==(self.a)**2+(self.b)**2):
            print("É retângulo")
        if(self.a==self.c):
            print("É equilátero")
        if(self.a==self.b or self.b==self.c and self.a!=self.c):
            print("É isósceles")
        if(self.a!=self.b and self.b!=self.c):
            print("É escaleno")
        else:
            print("Não é triângulo")
    def perimeter(self):
        p = self.a + self.b + self.c
        return p

T = Triangulo(2,3,4)
T.a
T.b
T.c
T.sort
T.test
T.perimeter
T1 = Triangulo(4,6,8)