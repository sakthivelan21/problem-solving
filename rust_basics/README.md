# Rust Basics

Rust is a systems programming language focused on safety, speed, and concurrency. It is designed to prevent common programming errors such as null pointer dereferencing and data races, making it a great choice for building reliable and efficient software.

To learn more about Rust, visit the [official Rust book](https://doc.rust-lang.org/book/title-page.html).

* Rust stops execution on panics (e.g., division by zero, out-of-bounds access).

* 

* Rust code uses snake case as the conventional style for function and variable names, in which all letters are lowercase and underscores separate words. 

```rs
fn main() {
    println!("Hello, world!");

    another_function();
}

fn another_function() {
    println!("Another function.");
}
```