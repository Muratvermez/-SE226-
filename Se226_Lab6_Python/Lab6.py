result = 1 #starting with 1
factorial = lambda num: 1 if num <= 1 else num * factorial(num - 1)

n = int(input("Enter a number: "))
x = int(input("Enter a power to end: "))

for i in range(1, x + 1):
    result += n ** i / factorial(i)

print(f"Result is: {result}")
#///////////////////////////////////////////////////////////
#QUESTION 2
result_2 = 0
def calculate_sum(n, k=1):
    """
    #using docstring to explain fucntion
    calculating giving series using recursion
    :param n upper limit to stop the equation:
    :param k the current value:
    :returns nothing:

    """
    global result_2 #global variable
    if k > n:
        return #returns nothing
    equation = (-1) ** (k + 1) / k
    result_2 += equation
    calculate_sum(n, k + 1)

n = int(input("Enter a value of number "))

calculate_sum(n)

print(f"The result of giving series is: {result_2}")