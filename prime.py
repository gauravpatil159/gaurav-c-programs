n = int(input("Enter number: "))
m = 3
if n % 2 == 0:
    print("Number's minimum divisor is 2")
else:
    while m != n:
        if n % m == 0:
            print("Number minimum divisor is " + str(m))
            break
        else:
            m = m +2
if m == n:
    print("Number is Prime number")
    

