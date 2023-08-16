package main

import "fmt"

func cyclic(arr []int) {
	i := 0
	for i < len(arr) {
		correct := arr[i] - 1
		if arr[correct] != arr[i] {
			arr[i], arr[correct] = arr[correct], arr[i]
		} else {
			i++
		}
	}
}

func main() {
	arr := []int{13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
	cyclic(arr)
	fmt.Println(arr)
}
