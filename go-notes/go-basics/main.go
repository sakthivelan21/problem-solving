package main

import (
	"errors"
	"fmt"
)

func print_func() {
	fmt.Printf("=====print_func====\n")

	//fmt is a internal library for print and scanf statements like in c

	fmt.Print("Hello Sakthi\n")

	fmt.Println("Hello Sakthi")

	fmt.Printf("hello %s\n", "Sakthi")

	fmt.Printf("hello %v %v %v\n", "Sakthi", 10, 23.3) // print value

	fmt.Printf("hello %T\n", "Sakthi") // prints type
}

func scan_func(){
	fmt.Printf("=====scanf_func====\n")

	var name string
	var age int
	fmt.Print("Enter your name: ")
	fmt.Scanln(&name)
	fmt.Print("Enter your age :")
	fmt.Scanf("%d\n",&age);

	fmt.Printf("user input %s %v\n", name,age)
}

func variables_func(){
	fmt.Printf("=====variables_func====\n")
	var name string = "Sakthi"
	var name1 = "Sakthi"
	name2:= "Sakthi" // this is allowed only inside func , not in global scope

	a,b :="sakthi", 10

	fmt.Println(name,name1,name2,a,b)
}

func data_types_func(){
	/*
	int  int8  int16  int32  int64 // whole numbers

	uint uint8 uint16 uint32 uint64 uintptr // positive whole numbers

	float32 float64 // decimal numbers

	complex64 complex128 // imaginary numbers (rare)
	*/

	fmt.Printf("=====data_types_func====\n")

	fmt.Printf("%T\n", 10)          // int
	fmt.Printf("%T\n", int8(10))    // int8
	fmt.Printf("%T\n", int16(10))   // int16
	fmt.Printf("%T\n", int32(10))   // int32
	fmt.Printf("%T\n", int64(10))   // int64
	fmt.Printf("%T\n", uint(10))    // uint
	fmt.Printf("%T\n", uint8(10))   // uint8
	fmt.Printf("%T\n", uint16(10))  // uint16
	fmt.Printf("%T\n", uint32(10))  // uint32
	fmt.Printf("%T\n", uint64(10))  // uint64
	fmt.Printf("%T\n", uintptr(10)) // uintptr
	fmt.Printf("%T\n", 10.5)        // float64
	fmt.Printf("%T\n", float32(10.5)) // float32
	fmt.Printf("%T\n", complex64(1+2i)) // complex64
	fmt.Printf("%T\n", complex128(1+2i)) // complex128
}

func constant_func(){

	// compile team oriented, it will not support runtime updates
	const value int = 10

	const val= "string"

	fmt.Printf("Constant Func called \n")

	fmt.Printf("%v %T\n", value, val)
}

func conditional_func(){
	fmt.Printf("=====conditional_func====\n")

	// if else
	if 10 > 5 {
		fmt.Println("10 is greater than 5")
	}

	// if else if
	if 10 > 5 {
		fmt.Println("10 is greater than 5")
	} else if 5 > 10 {
		fmt.Println("5 is greater than 10")
	} else {
		fmt.Println("5 is equal to 10")
	}
	// go allows declarations with if conditions
	if length:= 10; length%2==0 {
		fmt.Printf("%v is even\n", length)
	}
}

func simple_fun(a int,b int){
	fmt.Printf("simple function %v + %v = %v\n",a,b,a+b)
}

func simple_fun_multi_declarations(a,b int){
	fmt.Printf("simple function %v + %v = %v\n",a,b,a+b)
}

func pass_by_value(x int){
	x++
	fmt.Printf("pass by value %v\n",x)
}

func pass_by_reference(x *int){

	*x=100 
	fmt.Printf("pass by reference %v\n",*x)
}
// func func_name (func parameters) (fun return type)
func get_multiple_values() (string,int){
	return "Sakthi",21
}

func getCoords() (x, y int){
	// x and y are initialized with zero values
	x = 0
	y = 0
	return // automatically returns x and y
}

func div_err(x int,y int) (int,error){
	if y==0{
		return 0,errors.New("cannot divide by zero")
	}
	return x/y,nil
}

func functional_programming(){
		fmt.Printf("=====functional_programming====\n")
	
	simple_fun(10,20);

	simple_fun_multi_declarations(10,20)

	// pass by vaue
		x:= 1

		pass_by_value(x)

		fmt.Printf("after pass by value %v\n",x) // 1

	// pass by reference
	// go does not support pass by reference we can do with pointers

		pass_by_reference(&x)

		fmt.Printf("after pass by reference %v\n",x) // 2

	// getting multiple values from function

		a,b := get_multiple_values() 

		fmt.Printf("multiple values %v %v\n",a,b)

	// we are ignoring a return type as per need

		c,_ := get_multiple_values() 

		fmt.Printf("multiple values %v\n",c)

	// named return type as per need 

	x,y := getCoords()

	fmt.Printf("named return type %v %v\n",x,y)

	_,err := div_err(10,0);

	fmt.Printf("%v\n",err);

	b2,err2 := div_err(10,2);
	if err2==nil {
		fmt.Printf("%v %v\n",b2,err2);
	}
}

func structures_examples() {
	fmt.Printf("=====structures_examples====\n")

	// struct is a collection of fields
	type Vehicle struct {
		name string
		number int
	}
	type Person struct {
		name string 
		age int 
		vehicle Vehicle
	}

	// creating a struct
	var person Person = Person{"Sakthi",21,Vehicle{"car",1234}}

	fmt.Printf("%v\n",person)

	person2 := Person{}

	person2.name = "Sakthi"

	fmt.Printf("%v\n",person2)

	type embedded_struct struct{
		Vehicle
	}

	// embedded struct, like inheritance but only member fields are imported into this struct
	vehicle := embedded_struct{Vehicle{"car",1234}}

	fmt.Printf("%v\n",vehicle)
	fmt.Printf("%v %v %v %v \n",vehicle.name,vehicle.number,vehicle.Vehicle.name,vehicle.Vehicle.number);

}

// struct_methods

// struct methods are functions that are associated with a struct
type Rectangle struct {
	length int
	breadth int
}

func (r Rectangle) Area() int {
	return r.length * r.breadth
}

func struct_methods(){
	fmt.Printf("=====struct_methods====\n")

	rectangle := Rectangle{10,20}

	fmt.Printf("Area of rectangle %v %v\n",rectangle,rectangle.Area())
}

// interfaces in go

/*
	interfaces are different from other languages in go 

	in java , interfaces is like a trace template of functions that are declared and implemented in a class 

	we have to call implement to tell the compiler that we have imported them, 

	but in go , it's different. 

	Interfaces are collections of method signatures. A type "implements" an interface if it has all of the methods of the given interface defined on it.
*/

// Define the func_interface interface
type func_interface interface {
    Area2() int
	print(name string,age int)
}

// Define the Square struct
type Square struct {
    side int
}

// Implement the Area2 method for Square
func (s Square) Area2() int {
    return s.side * s.side
}

func (s Square) print(name string,age int){
	fmt.Printf("name %v age %v side %v\n",name,age,s.side)
}


func interfaces_examples(){
	square := Square{10}

	fmt.Printf("Area of square %v\n",square.Area2())

	square.print("Sakthi",21)
}
// type casting to interface
func printNumericValue(num interface{}) {
	switch v := num.(type) { // switch with interface
	case int:
		fmt.Printf("%T\n", v)
	case string:
		fmt.Printf("%T\n", v)
	default:
		fmt.Printf("%T\n", v)
	}
}

func switch_examples(){
	fmt.Printf("=====switch_examples====\n")

	// switch cases
	// switch cases are different from other languages
	// in go,

	a:= 10
	b:= "sakthi"

	printNumericValue(a)
	printNumericValue(b)
}

type CustomError struct {
	error_name string
}

func (e CustomError) Error() string {
	
	return "Custom Error: " + e.error_name
}

func validate(s string) (string,error){
	if s=="red" {
		return "valid color :" + s,nil
	}
	return "",CustomError{"invalid color: "+s}
}

func custom_errors_examples(){
	fmt.Printf("=====custom_errors_examples====\n")

	s:="blue"

	response,err := validate(s)

	if(err!=nil) {
		fmt.Printf("%v\n",err)
		return
	}

	fmt.Printf("%s\n",response)
}


func loops_examples(){
	fmt.Printf("=====loops_examples====\n")

	// for loop
	// for loop is the only loop in go
	// for loop is used to iterate over a collection of items

	// for loop with range
	// range is used to iterate over a collection of items
	// range returns two values, index and value
	// range is used to iterate over arrays, slices, maps, strings, and channels

	// array
	arr := [3]int{1, 2, 3}

	for i := 0; i < len(arr); i++ {
		fmt.Printf("loops: index %v value %v\n", i, arr[i])
	}

	index:=0


	// while loop in go
	for index < len(arr) {

		fmt.Print("while loop: index ",index," value ",arr[index],"\n")

		index++
	}


	for i, v := range arr {
		fmt.Printf("loop: index %v value %v\n", i, v)
	}

	for i,v := range arr {

		if(i%2==0) {
			continue
		}

		fmt.Printf("loop: index %v value %v\n", i, v)
	}

	// break statement

	for i,v := range arr {

		if(i==2) {
			break
		}

		fmt.Printf("loop: index %v value %v\n", i, v)
	}

	
}



func main() {

	// 1. print functions
		print_func()

	// 2. scanf to get user input
		// scan_func()

	// 3. variables
		variables_func()

	// 4. data types
		data_types_func()

	// 5. constants
		constant_func()

	// 6. conditianol statements
		conditional_func()

	// 7. functional programming

		functional_programming()

	// 8. structures 

		structures_examples()

		struct_methods()

	// 9. interfaces in go 

	    interfaces_examples()

	// 10. switch cases in go 

		switch_examples()

	// 11. error handling in go 

		//Go programs express errors with `error` values. An Error is any type that implements the simple built-in  error interface
		
		// When something can go wrong in a function, that function should return an error as its last return value. Any code that calls a function that can return an error should handle errors by testing whether the error is nil.

		// A nil error denotes success; a non-nil error denotes failure.
		custom_errors_examples()

	//  12 . loops in go 

		loops_examples()


}
