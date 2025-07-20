# Python Program to Print Right Angled Triangle Star Pattern

rows = int(input(" Enter the Total Number of Rows  : "))

print("Right Angled Triangle Star Pattern") 
for i in range(1, rows + 1):
    for j in range(1, i + 1):
        print("*", end = " ")
        
    print()

new_val = eval(input("Enter the upper height of diamond: "))
for i in range(new_val):
    print(" " * (new_val - i), "*" * (2*i + 1))