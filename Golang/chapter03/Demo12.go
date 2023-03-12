package main

import (
	"fmt"
	"strconv"
)

func main() {
	var i int = 1
	var str string
	str = fmt.Sprintf("%d", i)
	fmt.Printf("%q", str)

	// string --> basic
	str = "true"
	var b bool
	b, _ = strconv.ParseBool(str)
	fmt.Println("%q", b)
}
