def fact(number):
    if number < 0:
        return None 
    elif number == 0 or number == 1:
        return 1
    else:
        result = 1
        for i in range(2, number + 1):
            result *= i
        return result

x=int(input("enter numbers: "))
rf = fact(x)
print(f"The factorial is: {rf}")
