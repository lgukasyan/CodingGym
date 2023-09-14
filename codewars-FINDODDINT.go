package main

import (
	"fmt"
)

type numberSet map[int]int

func (n numberSet) has(number int) bool {
	_, ok := n[number]
	return ok
}

func (n numberSet) add(number int) {
	if n.has(number) {
		n[number] += 1 
		return
	}

	n[number] = 0
}

func FindOdd(seq []int) (sum int) {
	st := numberSet{}

	for _, v := range seq {
		st.add(v)
	}

	for i, v := range st {
		if v % 2 == 0 {
			return i
		}
	}

	return sum
}

func main() {
	fmt.Println(FindOdd([]int{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}))
}
