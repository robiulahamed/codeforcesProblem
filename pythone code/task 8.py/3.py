def max(x):
    current_max = x[0]
    for i in x:
        if i > current_max:
            current_max = i
    return current_max


x = [1,2,3,4]
print ("the maximum numbers",max(x))