#include <iostream>
using namespace std;
#include <string>
#define MAX 1000 

struct Person
{
    string name;
    char sex;
    int age;
    string contact;
    string address;
};
struct Addressbooks
{
   struct Person personArray[MAX]; 
   int m_size;
};

void showMenu();
void addPerson(Addressbooks *abs);
void showPerson(Addressbooks * abs);
void delPerson(Addressbooks *abs);
int isExist(Addressbooks * abs, string name);
void findPerson(Addressbooks *abs);
void editPerson(Addressbooks *abs);
void emptyPersonArray(Addressbooks *abs);

int main()
{
    system("clear");
    showMenu();
    bool record = true;

    Addressbooks abs;
    abs.m_size = 0;

    while (record)
    {
        int select;
        cout << "请输入你的操作: ";
        cin >> select;

        switch (select)
        {
            case 1:
                addPerson(&abs);
                break;
            case 2:
                showPerson(&abs);
                break;
            case 3:
                delPerson(&abs);
                break;
            case 4:
                findPerson(&abs);
                break;
            case 5:
                editPerson(&abs);
                break;
            case 6:
                emptyPersonArray(&abs);
                break;
            case 0:
                cout << "欢迎下次使用" << endl;
                record = false;
                break;
            default:
                cout << "抱歉，你的操作无效" << endl;
                break;
        }
    }
    return 0;
}

// 菜单界面
void showMenu()
{
    cout << "*************************" << endl;
    cout << "***** 1、添加联系人 *****" << endl;
    cout << "***** 2、显示联系人 *****" << endl;
    cout << "***** 3、删除联系人 *****" << endl;
    cout << "***** 4、查找联系人 *****" << endl;
    cout << "***** 5、修改联系人 *****" << endl;
    cout << "***** 6、清空联系人 *****" << endl;
    cout << "***** 0、退出通讯录 *****" << endl;
    cout << "*************************" << endl;
}
// 添加联系人
void addPerson(Addressbooks *abs)
{
    // 判断电话本是否满了
    if (abs->m_size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
    }
    else
    {
        cout << "******* 添加联系人 *******" << endl;
        // 姓名
        string name;
        cout << "姓    名: ";
        cin >> name;
        abs->personArray[abs->m_size].name = name;
        // 性别
        char sex;
        cout << "性    别: ";
        cin >> sex;
        abs->personArray[abs->m_size].sex = sex;
        // 年龄
        int age;
        cout << "年    龄: ";
        cin >> age;
        abs->personArray[abs->m_size].age = age;
        // 联系电话
        string contact;
        cout << "联系电话: ";
        cin >> contact;
        abs->personArray[abs->m_size].contact = contact;
        // 家庭住址
        string address;
        cout << "家庭住址: ";
        cin >> address;
        abs->personArray[abs->m_size].address = address;
        cout << "************************" << endl;
        // 更新电话本人数
        abs->m_size++;
        cout << "添加成功" << endl;
    }
}
void showPerson(Addressbooks * abs)
{
	if (abs->m_size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
        cout << "******* 显示联系人 *******" << endl;
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名：" << abs->personArray[i].name << "\t";
			cout << "性别：" << (abs->personArray[i].sex == 'M' ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].age << "\t";
			cout << "电话：" << abs->personArray[i].contact << "\t";
			cout << "住址：" << abs->personArray[i].address << endl;
		}
        cout << "**************************" << endl;
	}
}
//判断是否存在查询的人员，存在返回在数组中索引位置，不存在返回-1
int isExist(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
void delPerson(Addressbooks *abs)
{
    cout << "******* 删除联系人 *******" << endl;
    string delName;
    cout << "请输入您要删除的联系人: ";
    cin >> delName;
    int ret = isExist(abs, delName);
    if (ret != -1)
    {
        for (int i = ret; i < abs->m_size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
        abs->m_size--;
		cout << "删除成功" << endl;
    }
    else
    {
        cout << "抱歉, 电话本中没有此联系人" << endl;
    }
}
void findPerson(Addressbooks *abs)
{
    cout << "******* 查找联系人 *******" << endl;
    string name;
    cout << "请输入您要查找的联系人: ";
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "姓名：" << abs->personArray[ret].name << "\t";
        cout << "性别：" << (abs->personArray[ret].sex == 'M' ? "男" : "女") << "\t";
        cout << "年龄：" << abs->personArray[ret].age << "\t";
        cout << "电话：" << abs->personArray[ret].contact << "\t";
        cout << "住址：" << abs->personArray[ret].address << endl;
    }
    else
    {
        cout << "抱歉, 电话本中没有此联系人" << endl;
    }
}
void editPerson(Addressbooks *abs)
{
    cout << "******* 修改联系人 *******" << endl;
    string name;
    cout << "请输入您要修改的联系人: ";
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "1、姓名" << endl;
        cout << "2、性别" << endl;
        cout << "3、年龄" << endl;
        cout << "4、电话" << endl;
        cout << "5、住址" << endl;
        cout << "请选择您要修改的选项: ";
        int num;
        cin >> num;
        cout << "请输入内容: ";
        string str;
        char ch;
        int num2;
        switch (num)
        {
            case 1:
                cin >> str;
                abs->personArray[ret].name = str;
                break;
            case 2:
                cin >> ch;
                abs->personArray[ret].sex = ch;
                break;
            case 3:
                cin >> num2;
                abs->personArray[ret].age = num2;
                break;
            case 4:
                cin >> str;
                abs->personArray[ret].contact = str;
                break;
            case 5:
                cin >> str;
                abs->personArray[ret].address = str;
                break;
            default:
                cout << "抱歉, 你的操作无效" << endl;
                break;
        }
    }
    else
    {
        cout << "抱歉, 电话本中没有此联系人" << endl;
    }
}
void emptyPersonArray(Addressbooks *abs)
{
    abs->m_size = 0;
    cout << "通讯录以清空" << endl;
}