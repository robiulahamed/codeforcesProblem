def fs(*args):
    rs = [num for num in args if num % 2 == 0]
    
    return rs
num = fs(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
print(f"Filtered list without odd numbers: {num}")
