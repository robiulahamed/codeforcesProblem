def reverse_list(*args):
    return list(args[::-1])


original_list = [1, 2, 3, 4, 5]
reversed_list = reverse_list(*original_list)
print(f"Original List: {original_list}")
print(f"Reversed List: {reversed_list}")



