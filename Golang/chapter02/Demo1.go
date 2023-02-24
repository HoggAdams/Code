package main

import "fmt"

func main() {
	// \t --> 一个制表位 --> 用于对其
	fmt.Println("姓名\t年龄\t分数")
	fmt.Println("Hogg\t20\t60")
	fmt.Println("Mar\t18\t80")
	fmt.Println("Alger\t30\t20")
	// \n --> 换行 --> fmt.Print("\n") = fmt.Println("")
	fmt.Print("Hello ")
	fmt.Print("World\n")
	fmt.Print("Hello \n World")
	// \r --> Return
	// 从当前行开始依次覆盖
	fmt.Println("123456\r78")
}
