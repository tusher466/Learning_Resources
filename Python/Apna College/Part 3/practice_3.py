# Calculator
a = int(input("Enter the value of a:"))
b = int(input("Enter the value of b:"))
option = input("Enter operator(+, -, *, /, %, **): ")

sum = a + b
sub = a - b
mul = a * b
div = a / b
mod = a % b
pow = a ** b

if option == '+':
    print(sum)
elif option == '-':
    print(sub)
elif option == '*':
    print(mul)
elif option == '/':
    print(div)
elif option == '%':
    print(mod)
else:
    print(pow)
