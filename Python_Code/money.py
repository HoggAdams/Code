name = input("姓名：")
money = 5000000
judge = 0

def query_balance():
    """
    查看余额函数
    :return: 余额
    """
    print("----------------查询余额----------------")
    print(f"{name}，你好，您的余额为{money}元")
    return money

def deposit_money(a):
    """
    存钱函数
    :param a: 存入钱款
    """
    print("------------------存款------------------")
    global money
    money += a
    print(f"{name}，您好，您存款{a}元成功")
    print(f"{name}，你好，您的余额为{money}元")
   
def without_money(b):
    """
    取钱函数
    :param b: 取出钱款
    """
    print("------------------取款------------------")
    global money
    money -= b
    print(f"{name}，您好，您取款{b}元成功")
    print(f"{name}，你好，您的余额为{money}元")
    
def main_menu():
    """
    主菜单函数
    """
    print("-----------------主菜单--------------------")
    print(f"{name}，你好，欢迎来到银行ATM，请选择操作:")
    print("查询余额\t[输入1]")
    print("存款\t\t[输入2]")
    print("取款\t\t[输入3]")
    print("退出\t\t[输入4]")
    global judge
    judge = int(input("请输入您的操作: "))


while True:
    main_menu()
    if judge == 1:
        query_balance()
    elif judge == 2:
        deposit_money(int(input("你想存入的额度为(元): ")))
    elif judge == 3:
        deposit_money(int(input("你想取出的额度为(元): ")))
    elif judge == 4:
        print("退出成功，祝您生活愉快")
        break 
    else:
        print("您的操作无效，请重新尝试。")
