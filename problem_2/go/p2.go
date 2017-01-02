package main

import "fmt"

func main() {
	beforeOne := 1
	beforeTwo := 2
	n := [100000]int{}
	n[0] = beforeOne
	n[1] = beforeTwo
	sum := 0

	fmt.Println(n[0])
	fmt.Println(n[1])

	sum = n[1]
	for i := 0; i < 4000000; i++ {
		n[i+2] = n[i] + n[i+1]

		if n[i+2]%2 == 0 {
			sum = sum + n[i+2]
		}

		if n[i+2] > 4000000 {
			fmt.Println("answer is ", sum)
			break
		}
	}
}
