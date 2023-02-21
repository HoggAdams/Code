wordNumber = 1
charNumber = 0
text = input("You:")

for temp in text:
    while temp != '#':
        charNumber += 1
        if temp == ' ':
            wordNumber += 1
    if temp == '#':
        break
print(charNumber)
print(wordNumber)

