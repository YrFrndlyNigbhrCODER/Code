class rectangle:
    def getdata(self):
        self.l = float(input("L: "))
        self.b = float(input("B: "))
    def area(self):    
        print(self.l*self.b)
class circle:
    def getdata(self):
        self.r = float(input("R: "))
    def area(self):
        print(3.14*self.r*self.r)
def fun(obj):
    obj.getdata()
    obj.area()
ob = rectangle()
ob1 = circle()
fun(ob)
fun(ob1)