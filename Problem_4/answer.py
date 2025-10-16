palindrome = 0

for i in range(900, 1000):  
    for j in range(900, 1000):
        mul = i * j
        rev = int(str(mul)[::-1])  

        if rev == mul:  
            if rev > palindrome:  
                palindrome = rev

print(palindrome)  