name = input("What is your Full name")
lab = int(input("What is your lab grade"))
mid = int(input("What is your midterm grade"))
final = int(input("What is your final grade"))
LastScore = (lab / 100 *25 + mid / 100 * 35 + final / 100 * 40)
print(LastScore)
print(f"Name: {name}")
print(f"Lab score: {lab}")
print(f"Midterm grade: {mid}")
print(f"final grade: {final}")
print(f"Your last score is: {LastScore}")
