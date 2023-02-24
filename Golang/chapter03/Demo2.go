package main

import "fmt"

func main() {
	// 变量的默认值 --> 0
	var i int
	fmt.Println("i=", i)

	// 类型推导
	var num = 1
	fmt.Println("num=", num)

	// 省略var
	name := "hogg"
	fmt.Println("name=", name)

}
