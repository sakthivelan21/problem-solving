use std::{collections::HashMap, io};

use log::{info, warn, error};


pub mod examples;

pub mod logging;



fn fetch_user_input() {
    let mut name = String::new();

    println!("Enter your name:  ");

    io::stdin()
        .read_line(&mut name)
        .expect("Failed to read line");

    println!("The value of x is: {}", name);
}

fn variables_examples() {
    // Default variables -> are immutable in rust
    let x = 5;

    println!("The value of x is: {}", x);

    // x=6; // rust does not allow re-assigning the value of x
    // print!("The value of x is: {}", x);

    // mutable variables -> that allows for changing values in rust
    let mut y = 5;

    println!("The value of y is: {}", y);

    y = y + 10;

    println!("The value of y is: {}", y);

    // constant variables , declared with const keyword, followed by variable name in uppercase,
    //      and the datatype of the value is also being forced

    const PI: f64 = 3.14159; // constant variables in rust

    println!("The value of PI is: {}", PI);
}

fn rust_data_types() {
    /*
        Every value in Rust is of a certain data type, which tells Rust what kind of data is being specified so it knows how to work with that data

        Rust is a statically typed language, which means that it must know the types of all variables at compile time.

        A scalar type represents a single value. Rust has four primary scalar types: integers, floating-point numbers, Booleans, and characters.

        Compound types can group multiple values into one type. Rust has two primitive compound types: tuples and arrays.
    */

    // Scalar types
    let num:i64 = 1_000;
    let val:f64 = 20.0;
    let result:f64 = val + num as f64;

    println!("The value of result is: {}", result);

    // Compound types
    // Tuple is a fixed size , can not be grown, can hold multiple different data type
    let tup:(i32, f64, u8) = (500, 6.4, 1);
    println!("The value of tup is: {:#?}", tup);
    // unwrapping tuple
    let (x, y, z) = tup;
    println!("The value of x is: {} {} {}", x, y, z);

    // Accessing tuple values by index
    let five_hundred = tup.0;
    let six_point_four = tup.1;
    let one = tup.2;    
    println!("The value of five_hundred is: {} {} {}", five_hundred, six_point_four, one);

    //Array is a fixed size, can not be grown, can hold multiple same data type
    let arr = [1, 2, 3, 4, 5];
    println!("The value of arr is: {:#?}", arr);

    let temp = [3; 5]; // creates an array of 5 elements with value 3
    println!("The value of temp is: {:#?}", temp);



}

fn rust_panic_testing(){

    /*
    In many low-level languages, this kind of check is not done, and when you provide an incorrect index, invalid memory can be accessed. Rust protects you against this kind of error by immediately exiting instead of allowing the memory access and continuing
     */
    let a = [1, 2, 3, 4, 5];

    println!("Please enter an array index.");

    let mut index = String::new();

    io::stdin()
        .read_line(&mut index)
        .expect("Failed to read line");

    let index: usize = index
        .trim()
        .parse()
        .expect("Index entered was not a number");

    let element = a[index];

    println!("The value of the element at index {index} is: {element}");
}

/*
Functions in Rust 

* 
 */

fn basic_Func(num :i32) -> i32 {
   return  num + 1;

   // num +1 // is also correct for using in rust to return values
}

fn rust_if_cases() {
    let number : i32 = 3;
    
    // if else in rust
    if number %2 ==0 {
        println!("The number is even");
    } else {
        println!("The number is odd");
    }

    // ternary operator in rust
    let positive = if number >3 {"Positive"} else {"Negative"};

    println!("The value of positive is: {}", positive);
}

fn rust_loops(){
    let mut counter = 0;
    // loop keyword 
    let result = loop {
        counter += 1;

        if counter == 10 {
            break counter * 2; // break returns back counter value
        }
    };

    println!("The result is {result}");

    // while loop
    let mut number = 3;

    while number != 0 {
        println!("{number}!");

        number -= 1;
    }

    // for loops in rust 
    let a = [10, 20, 30, 40, 50];

    for element in a {
        println!("the value is: {element}");
    }

    for index in 0..a.len() {
        println!("the value is: {}", a[index]);
    }

    // for loop with range
    for number in (1..4).rev() {
        println!("{number}!");
    }

    // for loop with index and value 
    for (index, value) in a.iter().enumerate() {
        println!("Index: {}, Value: {}", index, value);
    }

    // for loop index till last 
    for index in 0..=a.len()-1 {
        println!("the value is: {}", a[index]);
    }
}

/* Rust Memory Management

 *   memory is managed through a system of ownership with a set of rules that the compiler checks. 
 *   If any of the rules are violated, the program won’t compile. 
 *   None of the features of ownership will slow down your program while it’s running.
 * 
 * Heap and Stack Memory
 * 
 *  Function variables and variables of fixed size are kept in stack memory.
 *  unknown size at compile time are kept at heap memory, which are containing the unfixed size of data , they are managed by rust ownership model
 * 
 * Ownership Rules
 * 
 *  Each value in Rust has an owner.
 *  There can only be one owner at a time.
 *  When the owner goes out of scope, the value will be dropped.
 * 
 * OwnerShip Working Example
 * 
 *  There is a natural point at which we can return the memory our String needs to the allocator: when s goes out of scope. 
 *  When a variable goes out of scope, Rust calls a special function for us. 
 *  This function is called drop, and it’s where the author of String can put the code to return the memory. 
 *  Rust calls drop automatically at the closing curly bracket.
 * 
 * 
 * 
 *  his pattern of deallocating resources at the end of an item’s
 *  lifetime is sometimes called Resource Acquisition Is Initialization (RAII).
 * 
 */
fn rust_ownership(){

    /*
    * each variable in rust will have a owner, and when the owner goes out of scope, the value will be dropped
    * when function goes out of scope,drop function is called and the memory is freed by rust itself.
     */
    let s1 = String::from("hello");

    /*
    *  Rust will never automatically create “deep” copies of your data. 
    * Therefore, any automatic copying can be assumed to be inexpensive in terms of runtime performance.
    * so only reference to the heap memory is copied, not the heap memory itself
    * s2 will be only allowed to use further, s1 will be no longer valid
    * drop will be called only for s2 and not for s1 , to remove double free error
     */
    let s2 = s1;
    // println!("{s1}"); // this will throw error as s1 is no longer valid

    println!("printing shallow copy {s2}");

    // deep copy of the heap memory
    let s3 = s2.clone();

    println!("printing deep copy {s3}");

    // Ownership and Functions
        // Passing a variable to a function will move or copy, just as assignment does.
        // When a variable is passed to a function, ownership is moved to the function, and it is no longer valid in the calling function.
        // This is known as a move in Rust.
    let s = String::from("hello");  // s comes into scope

    takes_ownership(s);             // s's value moves into the function...
                                    // ... and so is no longer valid here

    let x = 5;                      // x comes into scope

    makes_copy(x);                  // because i32 implements the Copy trait,
                                    // x does NOT move into the function,
    println!("{}", x);              // so it's okay to use x afterward

    // Return Values and Scope

    let s1 = gives_ownership();         // gives_ownership moves its return
                                        // value into s1

    let s2 = String::from("hello");     // s2 comes into scope

    let s3 = takes_and_gives_back(s2);  
    // s2 is moved into
    // takes_and_gives_back, which also
    // moves its return value into s3


    // Reference Borrowing, 
    //  *  The ampersand (&) is used to create a reference, which allows you to refer to some value without taking ownership of it.
    //  *  The opposite of referencing by using & is dereferencing, which is accomplished with the dereference operator, *.

    // Reference Rules 
    //  * At any given time, you can have either one mutable reference or any number of immutable references.
    //  * References must always be valid.
    //  * By default Rust won't allow dangling references to be created. instead transfer ownership to the function and return the value back to the calling function

    let mut s = String::from("hello");

    change(&mut s);

    println!("after change in borrow reference {s}");
    
} // Here, s3 goes out of scope and is dropped. s2 was moved, so nothing
// happens. s1 goes out of scope and is dropped.
// Here, x goes out of scope, then s. But because s's value was moved, nothing
// special happens.

fn change(some_string: &mut String) {
    some_string.push_str(", world");
}

fn gives_ownership() -> String {             // gives_ownership will move its
                                             // return value into the function
                                             // that calls it

    let some_string = String::from("yours"); // some_string comes into scope

    some_string                              // some_string is returned and
                                             // moves out to the calling
                                             // function
}

// This function takes a String and returns one
fn takes_and_gives_back(a_string: String) -> String { // a_string comes into
                                                      // scope

    a_string  // a_string is returned and moves out to the calling function
}

    

fn takes_ownership(some_string: String) { // some_string comes into scope
    println!("{some_string}");
} // Here, some_string goes out of scope and `drop` is called. The backing
  // memory is freed.

fn makes_copy(some_integer: i32) { // some_integer comes into scope
    println!("{some_integer}");
} // Here, some_integer goes out of scope. Nothing special happens.

fn calculate_length(s: String) -> (String, usize) {
    let length = s.len(); // len() returns the length of a String

    (s, length)
}

fn multi_return_value(){
    let s1 = String::from("hello");

    let (s2, len) = calculate_length(s1);

    println!("The length of '{s2}' is {len}");
}
// first entry point of the program in rust code 


fn rust_slices(){
    let mut s = String::from("hello world");

    let hello = &mut s[0..5]; // this will take the reference of the string from 0 to 5 mutable reference taken

    // s.clear();// this will throw error as the reference is still being used, u can't clear as mutable reference taken already
    // we are trying to get the second mutable reference , which is not possible
    // it prevents accesing a value after freed - heap use after free 

    println!("The value of hello is: {hello}"); // hello reference has gone out of scope 

    s.clear();



    println!("The value of s is: {s}"); // s reference has gone out of scope
}
#[derive(Debug)]
struct User {
    username: String,
    email: String,
    sign_in_count: u64,
    active: bool,
}
fn build_user(email: String, username: String) -> User {
    User {
        active: true,
        username,
        email,
        sign_in_count: 1,
    }
}

fn struct_examples(){

    let mut user1 = User {
        email: String::from("sakthi"),
        username: "Sakthi".to_string(),
        active: true,
        sign_in_count: 1,
    };
    println!("The value of user1 is: {} {} {} {}", user1.username,user1.email,user1.active,user1.sign_in_count);

    let user2 = build_user("sakthi".to_owned(), "sakthivelan".to_owned());

    println!("The value of user2 is: {} {} {} {}", user2.username,user2.email,user2.active,user2.sign_in_count);

    let user3 = User {
        ..user1}; // populating other values except sakthi from user 1

    // user1.email.clear();

    println!("The value of user3 is: {} {} {} {}", user3.username,user3.email,user3.active,user3.sign_in_count);

    print!("the user 1 is : {:#?}", user3);

    dbg!(&user2);
}

#[derive(Debug)]
struct Rectangle {
    width: u32,
    height: u32,
}

// struct methods 
impl Rectangle{

    // method to calculate the area of the rectangle
    fn area(&self) -> u32 {
        self.width * self.height
    }

    fn set_width(&mut self, width: u32){
        self.width = width;
    }
    fn print(&self){
        println!("The value of width is: {} {}", self.width, self.height);
    }

    fn can_hold(&self, other: &Rectangle) -> bool {
        self.width > other.width && self.height > other.height
    }
}
fn struct_methods(){
    let mut rec = Rectangle{width: 30, height: 50};
    
    println!("The area of the rectangle is: {}", rec.area());

    rec.set_width( 40);

    rec.print();

    println!("The area of the rectangle is: {}", rec.area());

    println!("The value of rec is: {:#?}", rec);

}

fn rust_enums(){
    enum  Colors{
        Red,
        Blue
    }

    let color = Colors::Red;

    
    
    // lieke switch case
    match color {
        Colors::Red => println!("The color is red"),
        Colors::Blue => println!("The color is blue"),
    }

    
    
    
    let mut _test:Option<i32> = if 0<0 {Some(5)} else {None};
    // Rust uses the Option<T> enum to explicitly handle cases where a value may be absent.
    match _test{
        Some(val) => println!("The value is: {}", val),
        // None => println!("The value is None"),
        _ => println!("The value is None"),
    }

    println!("The value of test is: {:#?}", _test);

    _test = Some(1); // to assign value to it in a value format

    // _test = Some(2.4); // it won't allow due to type mismatch

    println!("The value of test is: {:#?}", _test);
}
/*
* Crates in Rust 
*   A crate is a group of Rust code.
*   The package can contain a one ore more crates 
*   Types of crates
*       * Library crate
*       * Binary crate
*   A crate is a tree of modules that produces a library or executable.
*   The root module of a crate is always named lib.rs for a library crate and main.rs for a binary crate.
*   A crate can depend on other crates.
* 
* Code Execution in binary crates
*   * The main function is the entry point of a binary crate.
*   * Then it will look for the depending crates and compile them first and then execute the main function
*
 */
fn rust_crate_examples(){
    examples::greet_user("Sakthi");

}


fn rust_collections(){
    let mut v: Vec<i32> = Vec::new();

    
    for i in (10..100).step_by(10){ 
        v.push(i);
    }

    print!("The value of v is: {:#?}", v);

    print!("The first and last value of v is: {:#?} {:#?}", v.first(),v.last());

    let last  = v.pop();

    match last{
        Some(val) => println!("The value of last is: {}", val),
        None => println!("The vector is empty"),
    }

    print!("The value of v at index 2 is: {:#?}", v.get(2));

    v.remove(2);

    for i in &v {
        print!("The value of i is: {}", i);
    }


}


/* Rust Strings
* The String type, which is provided by Rust’s standard library rather than coded into the core language, is a growable, mutable, owned, UTF-8 encoded string type.
* A String is a wrapper over a Vec<u8>. Let’s look at some of our properly encoded UTF-8 example
 */
fn rust_strings(){
    let mut s:String = String::new();

    s.push('H');
    s.push_str("ello");

    println!("The value of s is: {} {}", s,s.capacity());

    s.clear();

    println!("The value of s is: {} {}", s,s.capacity());

    s.push_str("sakthiq2");

    s.pop();


    let s0 = s.chars().nth(0).unwrap();

    println!("The value of s is: {} {}", s,s0);
}

fn rust_hashmap(){
    let mut map: HashMap<char,i32> = HashMap::new();

    let text = "hello world";

    for c in text.chars(){
        let count = map.entry(c).or_insert(0);
        *count += 1;
    }

   println!("The value of map is: {:#?}", map.get(&'e'));

    for (key, value) in &map {
        println!("The value of key is: {} {}", key, value);
    }
}

/*
* Error Handling in Rust
*
*  Error handling in Rust is a critical part of writing robust and maintainable code. 
*  Rust provides two primary mechanisms for handling errors:
* 
* Recoverable Errors (handled with Result<T, E>)
* 
* Unrecoverable Errors (handled with panic!)
*      
* 
 */
fn rust_error_handling(){

    let f = std::fs::read_to_string("hello.txt");

    if f.is_err() {
        println!("Problem opening the file: {:?}", f.unwrap_err());
        return;
    }
    let f = f.unwrap();

    println!("The value of f is: {:#?}", f);
}

fn rust_fern_logs(){
    logging::setup_logger().expect("Failed to initialize logger");
    let x = 10;
    info!("This is an info message.{}",x);
    warn!("This is a warning.");
    error!("This is an error.");
}

fn rust_tracing_logs(){
    logging::init_logging();
    println!("rust tracing logs");
    tracing::info!("Logging system initialized");
    tracing::info!("Application started");

    tracing::error!("This is an error message");
}

fn main() {
    println!("Rust Examples Start");

    // fetch_user_input();

    // variables_examples();

    // rust_data_types();

    // rust_panic_testing();

    // let val : i32 = basic_Func( 5);

    // println!("The value of val is: {}", val);

    // rust_if_cases();

    // rust_loops();

    // multi_return_value();

    // rust_ownership();

    // rust_slices();

    // struct_examples();

    // struct_methods();

    // rust_enums();

//    rust_crate_examples();

    // rust_collections();

    // rust_strings();

    // rust_hashmap();

    // rust_error_handling();


    // rust_fern_logs();

    rust_tracing_logs();

}
