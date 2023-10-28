t = int(input('Test case>'))
for i in range(t+1):
    is_am = input('number>>')
    sum1 = int(is_am[0]) ** int(len(is_am))
    sum2 = int(is_am[1]) ** int(len(is_am))
    sum3 = int(is_am[2]) ** int(len(is_am))
    if sum1+sum2+sum3 == int(is_am):
        print('n is an armstrong number!')
    else:
        print('n is not an armstrong number!')

  