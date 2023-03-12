package main

import "fmt"

func main() {
	var num1 int = 99
	var char1 byte = 'c'
	var str string

	// int --> string
	str = fmt.Sprintf("%d", num1)
	fmt.Printf("str type is %T, str=%q\n", str, str)

	// char --> string
	str = fmt.Sprintf("%c", char1)
	fmt.Printf("str type is %T, str=%q\n", str, str)
}
