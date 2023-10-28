t = int(input('>test case'))
for i in range(t):
    number_inputing = int(input('is Prime number>>'))
    for x in range(2, number_inputing):
        if number_inputing % x == 0:
               print(f"{number_inputing} is prime number")
               break
    print(f"{number_inputting} isn't prime number")
             