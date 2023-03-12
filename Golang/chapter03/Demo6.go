package main

import (
	"fmt"
)

func main() {
	for i := 1; i <= 9; i++ {
		for q := 1; q <= i; q++ {
			str := fmt.Sprintf("%d * %d = %d\t", q, i, i*q)
			fmt.Print(str)
		}
		fmt.Println()
	}
}
