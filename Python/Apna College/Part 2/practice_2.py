product_1 = float(input("Enter the value of first product: "))
product_2 = float(input("Enter the value of second product: "))
product_3 = float(input("Enter the value of third product: "))

total_bill = product_1 + product_2 + product_3
print("Total bill:", total_bill)

print("Average price:", total_bill / 3)

superhero = input("Enter any superhero name:")

starts_with_s = superhero.lower().startswith("s")
print("Does the name start with S or s?", starts_with_s)


# ------- SOLUTION 1 -------

# Take the prices of three products
price1 = float(input("Enter price of product 1: "))
price2 = float(input("Enter price of product 2: "))
price3 = float(input("Enter price of product 3: "))

# Calculate the total and average
total_bill = price1 + price2 + price3
average_price = total_bill / 3

# Display the results
print("Total bill amount:", total_bill)
print("Average price:", average_price)


# ------- SOLUTION 2 -------

# Take a superhero name and check its first letter
superhero_name = input("Enter a superhero name: ")

starts_with_s = superhero_name.lower().startswith("s")
print("Does the name start with S or s?", starts_with_s)
