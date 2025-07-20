
def sum_function(*numbers):
    total = 0
    for i in numbers:
        total += i

    return total
    
print(sum_function(1,2,3,4,5))


listt=[[1, 2, 3],[4, 5, 6]]
list_t=[]
for i in listt:
    for j in i:
        list_t.append(j);
print(list_t)