# arithmetic operators
print(5 + 5)
print(25 - 6)
print(5 * 9)
print(5 / 3) # proper decimal value
print(5 // 3) # integer value
print(5 % 3) # modulo -> remainder
print(5 ** 3) # power -> base ** power

# assignment operators
x = 1
# x = x + 5
x += 5
print(x)

y = 2
# y = y - 2
y -= 2
print(y)

z = 5
# z = z * 5
z *= 5
print(z)

m = 10
# m = m / 2
m /= 2
print(m)

n = 20
# n = n % 2
n %= 2
print(n)

# operator precendence
# (), *, / 
# +, -

# comparison operators
# <, >, <=, >=, ==, !=
print(3 > 2)
print(1 < 0)
print(5 >= 4)
print(10 <= 10)

# logical operators
# or, and, not 
stt1 = 3 > 5
stt2 = 2 == 2
print(stt1 or stt2)

print((5 == 5) and (9 < 8))

print(not (3 > 2))

# conditionals (if-else)
age = 17
if age >= 18:
    print("You are an adult")
    print("You can cast vote")
elif age < 18:
    print("You can't cast vote")

marks = int(input("Enter your marks:"))
if marks >= 80 and marks <= 100:
    print('A')
elif marks >= 60:
    print('B')
elif marks >= 50:
    print('C')
else:
    print('F') 

print("end of code")

