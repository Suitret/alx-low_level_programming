#!/usr/bin/python3

def is_palindrome(number=0):
    original = str(number)
    copy = reversed(original)
    if original == copy:
        return True
    else:
        return False

for i in range(100, 1000):
    for j in range(100, 1000):
        if is_palindrome(i*j):
            print(i*j)
