import math

def ekok(down, top):
    result = 1
    for i in range(down, top + 1):
        result = result * i // math.gcd(result, i)  # Ekok formülü
    return result

result = ekok(1, 20)
print(result)
