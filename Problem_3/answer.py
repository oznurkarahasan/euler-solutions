num = 600851475143
count = 2
max = 0  

while num > 1:  
    if num % count == 0:  
        num //= count  
        if count > max: 
            max = count 
    else:
        count += 1  

print(max)  