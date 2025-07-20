def cpc(*args):

    result = 1
    for num in args:
        result *= num

    return result

rpr = cpc(2, 3, 4, 5)
print(f"The product is: {rpr}")
