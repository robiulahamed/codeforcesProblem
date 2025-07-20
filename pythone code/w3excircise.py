class student:
    name=""
    roll=""
    def __init__(self,name,roll):
        self.name=name
        self.roll=roll
    

    def disply(self):
        print(f"Name={self.name},    Roll={self.roll}")

kawser=student("kawser    ahamed ratul",210330)

kawser.disply()


sul=student("sultan mahmud saad", 210354)

sul.disply()

