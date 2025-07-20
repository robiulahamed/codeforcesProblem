def occ_cont(elmnt, *args):
    count = args.count(elmnt)
    return count


result_count = occ_cont("apple", "banana", "apple", "orange", "apple", "grape")
print("Occurrences of 'apple':", result_count+1)
