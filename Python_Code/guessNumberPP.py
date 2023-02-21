import random

randomNumber = random.randint(1,11)
frequency = 0

while True:
    frequency += 1
    if int(input("Your number is: ")) == randomNumber:
        print("You are right.")
        break
print(frequency)
