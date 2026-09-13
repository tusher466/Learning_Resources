# Type Casting -> explicit
age = input("Enter your age: ")
new_age = int(age) + 1

print(new_age)
print(float(new_age))

# Type Conversion -> implicit
print(1 + 2.5)
print(1 + int(2.999))

# Sum Program
a = input("Enter the value of a = ")
b = input("Enter the value of b = ")

sum = int(a) + int(b)
print("Sum = ",sum)

# String Operations
name = "Tony Stark"
grade = 'A'

print(name.upper())
print(name.lower())

# Find
print(name.find("ark")) # index => position
print(name.find("T"))
print(name.find("X"))

# Replace
print(name.replace("Tony Stark", "Ironman"))
print(name.replace("Tony", "Any"))
print(name.replace("Stark", "Parker"))

# Check for presence
print('S' in name, 'T' in name)
print('X' in name)

# Reserved words
# if, else, for, while, in, True, False, and, or, not
