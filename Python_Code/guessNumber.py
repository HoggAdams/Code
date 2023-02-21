import random

# 设置随机数
randomNumber = random.randint(1,11)

# 获取用户输入的数字
userNumber = int(input("请输入你的数字:"))

if randomNumber == userNumber:
    print("Your are right.")
else:
    print("Your are wrong.")
    # 判断猜测数字大小
    if randomNumber > userNumber:
        print("It's too little.")
    elif randomNumber < userNumber:
        print("It's too largs.")
