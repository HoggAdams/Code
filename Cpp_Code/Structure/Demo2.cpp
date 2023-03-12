#include <iostream>
using namespace std;
#include <string>

struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//教师结构体定义
struct teacher
{
    //成员列表
	int id; //职工编号
	string name;  //教师姓名
	int age;   //教师年龄
	struct student stu; //子结构体 学生
};


int main()
{
    struct teacher Hogg;
    Hogg.name = "Hogg";
    Hogg.age = 29;
    Hogg.id = 37;
    Hogg.stu.name = "Mar";
    Hogg.stu.score = 70;
    Hogg.stu.age = 18;

    return 0;
}