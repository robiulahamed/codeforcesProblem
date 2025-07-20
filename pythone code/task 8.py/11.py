def is_prime(number):
    if number < 2:
        return False  # Numbers less than 2 are not prime

    for i in range(2, int(number**0.5) + 1):
        if number % i == 0:
            return False  # Found a divisor, not a prime number

    return True  # No divisors found, it's a prime number

def identify_primes(*args):
    return [num for num in args if is_prime(num)]

numbers = identify_primes(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
print(f"Prime numbers in the set: {numbers}")
