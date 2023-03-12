package main

import (
	"fmt"
	"unsafe"
)

func main() {
	var i = 1
	fmt.Printf("%T %d", i, unsafe.Sizeof(i))
	fmt.Println()
}
