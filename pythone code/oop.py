class triangle:
    base=""
    height=""

    def __init__(self,base,height):
        self.base=base
        self.height=height
    def disply(self):
        area=0.5*self.base*self.height
        print("Area= ",area)    


t1=triangle(10,20)
t1.disply()

t2=triangle(20,30)
t2.disply()



