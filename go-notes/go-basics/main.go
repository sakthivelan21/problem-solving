package main

import "fmt"

func array() {
	var array [5]int = [5]int{}

	fmt.Println(array)

	array[0] = 1

	fmt.Printf("Length of the array is %v\n", len(array))

	fmt.Printf("First element of the array is %v\n", array[0])

	slice := []int{}

	fmt.Printf("Length of the slice is %v\n", len(slice))

	slice = append(slice, 1)

	fmt.Printf("Elements in array %v\n", slice)

	slice = append(slice, 1, 2, 3, 4, 5, 6)

	fmt.Printf("Elements in array %v\n", slice)

	sl := array[1:3]

	fmt.Printf("Elements in array before %v\n", array)

	sl[0] = 10

	fmt.Printf("Elements in array %v\n", array)

	fmt.Printf("Elements in sl %v\n", sl)

	sl = append(sl, 20, 1, 3, 4, 5, 7, 5, 6, 6, 6)
	fmt.Printf("Elements in array %v\n", array)

	fmt.Printf("Elements in sl %v\n", sl)

	sl[0] = -10

	fmt.Printf("Elements in array %v\n", array)

	fmt.Printf("Elements in sl %v\n", sl)

	sl_copy := make([]int, len(sl))

	copy(sl_copy, sl)

	fmt.Printf("Elements in sl_copy %v\n", sl_copy)

	fmt.Printf("number 10 is even ? %v\n", isEven(10))

}

func isEven(number int) bool {

	if number%2 == 0 {
		fmt.Printf("Number %v is even\n", number)
		return true
	} else { // else cannot start from a new line
		fmt.Printf("Number %v is odd\n", number)
		return false
	}

}

// starting point of go application is main function
func main() {
	// variable declaration
	// var name string = "Sakthi"
	const age int = 21

	// print to console
	fmt.Println("Hello, World!")

	// ---- fetch input from name from user
	// fmt.Printf("Hello, please enter your name!\n")
	// fmt.Scanf("%s", &name)

	// fmt.Printf("Hello, %v!\n", name) // %v is used to print the value of the variable

	fmt.Println("Your age is", age)

	//----- go is a statically typed language
	// var n
	// n = 10
	// go is statically typed and it has to be initialized with a value or to mention its type
	var n int
	n = 20

	fmt.Printf("Value of n is %v - type %T\n", n, n)

	array()

	arr := []int{1, 2, 3, 4, 5}

	for i := 0; i < len(arr); i++ {
		fmt.Printf("%v", arr[i])
	}

	arr2 := []string{"a", "b", "c", "d", "e"}

	for index, value := range arr2 {
		fmt.Printf("Index %v - Value %v\n", index, value)
	}

	// calling a function
	a, b := getDetails("Sakthi", 21)
	fmt.Println(a, b)

}

func getDetails(name string, age int) (string, int) {
	return name, age
}
