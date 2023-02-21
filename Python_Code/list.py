ageList = [21, 25, 21, 23, 22, 20]

# 追加一个数字31，到列表的尾部
ageList.insert(-1, 31)
print(ageList)

# 追加一个新列表[29, 33, 30],到列表尾部
newList = [29, 33, 30]
ageList.extend(newList)
print(ageList)

# 取出第一个元素
firstNumber = ageList[0]
print(firstNumber)

# 取出最后一个元素
lastNumber = ageList[-1]
print(lastNumber)

# 查找元素31，在列表中的下标位置
place = ageList.index(31)
print(place)

str = "黑马程序员"
str_new = str[::-1]
print(str_new)
