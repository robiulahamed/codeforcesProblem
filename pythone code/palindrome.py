
    
    


input_string = input("Enter a string: ")
string = input_string.lower().replace(" ", "")
for i in range(len(string)//2):
        if string[i] != string[-(i+1)]:
            print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")