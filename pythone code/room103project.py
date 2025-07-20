class boys:
    name=""
    dept=""
    hometown=""

    def __init__(self,name,dept,hometown):
        self.name=name
        self.dept=dept
        self.hometown=hometown
    


    def display(self):
        
        print(f"Name= {self.name}, Dept ={self.dept}, Hometown= {self.hometown}\n") 

print("all the details the boys ")

num1=boys("Kawser ahamed Ratul","CSE","chadpur")
num1.display()

num2=boys("abrar mostofa","civil engineerin","chattogram")
num2.display()

num3=boys("sultan mahmud saad","civil engineering","chadpur")
num3.display()

num4=boys("hedayet ullah ","Electircal Enginerring","kushtia")
num4.display()

num5=boys("Ibrahim parvez Ashik","Electrical engineering","shirajgong")
num5.display()

num6=boys("Tanjimul hasan","electriaca engineering","chattogram")
num6.display()

num7=boys("Ahamed Robiul","CSE","Brahmonbaria")
num7.display()

print("all the details 103 boys ")