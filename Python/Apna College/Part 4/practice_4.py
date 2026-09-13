# print all odd numbers from 1 to 20
for i in range(1, 21, 2):
    print(i)

# print the table of 57
for i in range(1, 11):
    print(57, "x", i, "=", 57 * i)

# print all multiples of 3 from 1 to 50 but skip 15
for number in range(3, 51, 3):
    if number == 15:
        continue
    print(number)

# Take two integers a and b as input
# Find and print the first number between 1 and 1000 that is divisible by both numbers
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
for number in range(1, 1001):
    if number % a == 0 and number % b == 0:
        print("First number divisible by both:", number)
        break
