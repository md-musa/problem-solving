def powerOfTwo(num):
    if 
    powOf2 = []
    for i in range(num):
        x = 2**i
        powOf2.append(x)
    
    print(powOf2)

    for x in powOf2:
        if num == x:
            return "It's a power of 2"
    return "Not a power of 2"

T = int(input())
for i in range(T):
     inputer = int(input())
     print(powerOfTwo(inputer))

