def avg_function(*numbers):
    total = 0
    count= 0
    for i in numbers:
        total += i

    return total/5
    
print(avg_function(1,2,3,4,5))