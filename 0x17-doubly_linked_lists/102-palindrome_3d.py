#!/usr/bin/python3
palindromes = set();
for x in reversed(range(100, 1000)):
    for y in reversed(range(100, x+1)):
        z = str(x * y)
        if z == z[::-1]:
            palindromes.add(int(z));
if palindromes:
    print("Palindrome found! {}".format(max(palindromes)))
if not palindromes:
    print("Sorry, no palindrome found.")
