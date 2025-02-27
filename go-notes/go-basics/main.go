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


}
