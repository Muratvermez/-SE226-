var1 = int(input("Please enter an integer to summ, diff, prod"))
var2 = int(input("Please enter an integer to summ, diff, prod"))

sum = var1 + var2
diff =var1 - var2
prod = var1 * var2

print(f"{var1} + {var2} = {sum}\n" +
      f"{var1} / {var2} = {diff}\n" +
      f"{var1} * {var2} = {prod}")