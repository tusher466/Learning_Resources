# range
# range(start, stop, step)

# loops => repeat
# while loop
cnt = 1
while cnt <= 5:
    print("ApnaSchool")
    cnt += 1

i = 1
while i <= 5:
    print(i * '*')
    i += 1

i = 5
while i >= 0:
    print(i * '*')
    i -= 1

# for loop
nums = range(1, 6)
for i in nums:
    print(i)

# even number
for i in range(1, 100):
    if i % 2 == 0:
        print(i)

for i in range(2, 100, 2):
    print(i)

# multiples of 3 (1 to 50) except 21
for i in range(1, 51):
    if (i == 21):
        break
    if (i == 6):
        continue
    if i % 3 == 0:
        print(i)
