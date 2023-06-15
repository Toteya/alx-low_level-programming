#!/usr/bin/python3
for x in reversed(range(1000)):
    palindrome = False
    for y in [x, x - 1]:
        z = str(x * y)
        if z == z[::-1]:
            palindrome = True
            break;
    if palindrome:
        print(f"Palindrome found! {z} = {x} x {y}")
        break;
if not palindrome:
    print("Sorry, no palindrome found.")
