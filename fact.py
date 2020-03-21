
n = int(input("Enter number: "))
a = n
m = n
print(a)
while n > 1:
 m = m * (n - 1)
 n = n - 1
print("Factorial of "+str(a)+" is " + str(m))